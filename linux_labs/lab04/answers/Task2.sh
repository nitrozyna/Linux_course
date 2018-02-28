#!/bin/bash

# A script which prints the word count, using the wc command, of each line in
# help-read.txt. Make sure help-read.txt is in the same directory!
# Created by Malgorzata Kurkiewicz, 2145411k

cat help-read.txt | while read line;

do
  echo $line | wc -w

done
