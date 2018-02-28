#!/bin/bash

# This function checks if the given parameter is a file or a directory and if not
# it mentions that it does not exist.
# Created by Malgorzata Kurkiewicz, 2145411k

file_or_dir(){


for var in "$@"
do
	if [ -d $var ]; then
		echo "$var exists and is a directory."

  elif [ -e $var ]; then
    		echo "$var exists and is a file."

  else
    echo "$var does not exist."
	fi

done
}

file_or_dir Task1.sh Task2.sh newdirectory
