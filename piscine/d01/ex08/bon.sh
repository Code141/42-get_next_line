ldapsearch -Q cn="*bon*" cn | grep "cn: " | grep "BON" | wc -l | sed "s/ //g"
