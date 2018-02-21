#!/bin/bash

# This function checks if a given parameter is a directory that
# exists, if so, it moves into it. Otherwise it creates a new
# directory.

dir_manipulation() {

  if [ -d ./${1} ]; then
    cd ${1}
    pwd
  else
    mkdir ${1}
  fi
}

dir_manipulation newdirectory
