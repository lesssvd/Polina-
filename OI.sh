#!/bin/bash
if [ $# -eq 0 ]; then 
	echo "Используй: $0 число1 число2 число3 ..."
	exit 1
fi 

count=$#
sum=0

for num in "$@"; do
	sum=$((sum + num))
done

OI=$(echo "scale=2; $sum/$count"|bc)

echo "Среднее значение: $OI"
