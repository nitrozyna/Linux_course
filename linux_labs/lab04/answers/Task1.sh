#!/bin/bash

# Script, which finds individual files in the current directory with a size of 0, ask
# for confirmation, and deletes them.
# Created by Malgorzata Kurkiewicz, 2145411k


for file in *
do
  if [ ! -s ${file} ];then
    echo "${file} is empty, would you like to delete it?"
    read answer
    if [ ${answer} = "y" ] || [ ${answer} = "Y" ];then
      rm ${file}
    fi
  fi
done
