#!/usr/bin/env bash

rm -f tmp

h=$(grep -Eo '[[:xdigit:]]{40} +-$' \
         uniq_fn.txt) && h=${h::40} || exit 1
func="func_${h::11}"
sed -E "s/($h +)-$/\1$func/" uniq_fn.txt
exit 0
f=($(grep -h "^$h" fn_norm.txt \
     | cut -c49- | cut -d. -f1))

(( ${#f[@]} )) && [[ -f "layer/${f[0]}.h" ]] || exit 1

printf -v rgx -- '|%s' "${f[@]}"
rgx="layer_moreNet_(${rgx:1})"

sed -Ei "s/$rgx\(/$func(/" model.c

{ echo;
  sed -E -e 's/^static inline/LIB_HIDDEN/' \
      -e "s/^layer_moreNet.+ *\(/$func (/" \
      "layer/${f[0]}.h"; } >> activation.c

{ grep -B1 "^$func" activation.c | head -2 \
  | sed -E 's/^(LIB_HIDDEN)/\1 extern/'    \
  | head -c-1; echo ';'; } >> activation.h &&
sed -i '/#endif.*/d' activation.h          &&
echo '#endif // ACTIVATION_H_' >> activation.h

printf -v hdr -- 'layer/%s.h\n' "${f[@]}" &&
echo -n "$hdr" | grep -Fvf- layer.h > tmp &&
(( (n=$(wc -l tmp | cut -d\  -f1)) > 0 )) &&
(( $(wc -l layer.h | cut -d\  -f1) > n )) &&
mv tmp layer.h || exit 1

echo -n "$hdr" | xargs git rm
