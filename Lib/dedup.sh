#!/usr/bin/env bash

rm -f tmp

h=$(grep -Eo '[[:xdigit:]]{40} +-$' \
         uniq_fn.txt) && h=${h::40} || exit 1

f=($(grep -h "^$h" fn_norm.txt \
     | cut -c49- | cut -d. -f1))

(( ${#f[@]} )) && [[ -f "layer/${f[0]}.h" ]] || exit 1

printf -v rgx -- '|%s' "${f[@]}"
rgx="layer_moreNet_(${rgx:1})"

{ echo; sed s/^static\ inline/LIB_HIDDEN/ \
            "layer/${f[0]}.h"; }          \
  >> activation.c                         &&

printf -v hdr -- 'layer/%s.h\n' "${f[@]}" &&
echo -n "$hdr" | grep -Fvf- layer.h > tmp &&
(( (n=$(wc -l tmp | cut -d\  -f1)) > 0 )) &&
(( $(wc -l layer.h | cut -d\  -f1) > n )) &&
mv tmp layer.h || exit 1


#echo "$rgx"
