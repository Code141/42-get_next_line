cat /etc/passwd |
grep -v "#" |
awk '{if((NR+1) % 2)print $0}' |
cut -d ':' -f 1 |
rev |
sort -r |
sed -n "$FT_LINE1","$FT_LINE2"p |
tr '\n' ' ' | 
sed 's/ /, /g' |
rev |
sed 's/,/./' |
sed 's/ //' |
rev |
tr -d '\n'
