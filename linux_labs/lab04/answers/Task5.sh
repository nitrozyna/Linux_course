#!/bin/bash

# Putting it all together.
# Make sure data is present in the same directory as the Task5.sh script!

# check if the number of parameters is less than one and exit when true
if [  "$#" -lt 1 ];then
	echo "Too few parameters, exiting."
	exit 1
else
# checking if each argument is a file, if not exit the program
	for var in "$@"
	do
		if [ ! -e $var ];then
      echo "Sorry, $var is not a file, exiting."
			exit 2
		fi
	done
fi

# A function, which decodes a string using base64
process() {
	echo ${1} |base64 -d
}

# decoding first line and last line from each file and exiting when successfull
for FILE in $@
do
	first_line=$(head -1 $FILE)
  last_line=$(tail -1 $FILE)
	process ${first_line}
  process ${last_line}

done

exit 0
