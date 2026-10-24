#!/bin/bash
if [ $# -eq 0 ]; then 
	echo "Используй: $0 число1 число2 число3 ..."
	exit 1
fi
numbers=("$@")
average() {

	count=$#
	sum=0

	for num in "$@"; do
	sum=$(echo "$sum + $num" | bc)
	done

	echo "scale=2; $sum/$count"|bc
	}
res=$(average "${numbers[@]}")
echo "Среднее значение: $res"
