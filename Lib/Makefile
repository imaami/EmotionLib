override BIN := EmotioLib.dll
override SRC := EmotionLib.c activation.c model.c tensor.c weights.c
override OBJ := $(SRC:%=%.o)
override DEP := $(SRC:%=%.d)
override CC  := $(or $(if $(filter default,$(origin CC)),,$(CC)),$(if $(USE_CLANG),clang,gcc))

override BASE_CFLAGS := $(strip -std=c2x -flto $(SANITIZE:%=-fsanitize=%) \
  -O$(if $(DEBUG),$(if $(USE_CLANG),0,g) -g3,fast -DNDEBUG) -Wall -Wextra \
  $(if $(USE_CLANG),                                                      \
    -Weverything                                                          \
    -Wno-c++-compat                                                       \
    -Wno-c++98-compat                                                     \
    -Wno-disabled-macro-expansion                                         \
    -Wno-fixed-enum-extension                                             \
    -Wno-gnu-empty-struct                                                 \
    -Wno-gnu-statement-expression                                         \
    -Wno-gnu-statement-expression-from-macro-expansion                    \
    -Wno-gnu-zero-variadic-macro-arguments                                \
    -Wno-switch-enum                                                      \
    -Wno-unknown-warning-option                                           \
    -Wno-unsafe-buffer-usage                                              \
    -Wno-used-but-marked-unused)                                          \
  -Wformat=2 -Wno-declaration-after-statement -Wno-unknown-pragmas)

ifeq (command line,$(origin CFLAGS))
override USER_CFLAGS := $(CFLAGS)
override EXTRA_CFLAGS := $(strip                \
  $(if $(filter -save-temps,$(USER_CFLAGS)),    \
    $(if $(USE_CLANG),                          \
      -Wno-constant-logical-operand             \
      -Wno-gnu-line-marker -pipe),              \
    -pipe) $(filter-out -pipe,$(USER_CFLAGS)))
else
override undefine USER_CFLAGS
override EXTRA_CFLAGS := -pipe
endif

override CFLAGS := $(BASE_CFLAGS) $(EXTRA_CFLAGS)
override LIBS   := -lm

$(BIN): $(OBJ)
	$(CC) -shared $(CFLAGS) -o $@ $^ $(LIBS)

%.c.o: %.c
	$(CC) $(CFLAGS) -o $@ -c -I. -MMD -MQ $@ -MF $<.d $<

-include $(DEP)

.PHONY: clean
clean: override WHAT = $(wildcard \
	$(BIN) $(OBJ) $(DEP) *.args.0 *.bc *.i *.ii *.lto_wrapper_args \
	*.ltrans_args *.ltrans0.o *.ltrans.o *.ltrans.out *.res *.s *.temp.o)
clean:; $(if $(WHAT),$(RM) $(WHAT),@:)
