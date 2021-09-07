#!/bin/bash
arr=(1 2 3 477 88 11 22 5 6 23)
max=-1
for number in ${arr[@]}; do
	if (($number > $max)); 	then max=$number; fi
done
echo $max
