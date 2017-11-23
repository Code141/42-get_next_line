find -s . -name "*.sh" -type f -exec basename {} \; | rev | sed "s/hs.//" | rev
