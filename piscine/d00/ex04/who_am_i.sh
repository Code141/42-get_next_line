ldapwhoami -Q | grep "uid" | sed "s/dn://g"
