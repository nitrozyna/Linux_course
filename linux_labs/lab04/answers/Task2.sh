#!/bin/bash

# A script which prints the word count, using the wc command, of each line in help-read.txt.

cat help-read.txt | while read line;

do
  echo $line | wc -w

done
