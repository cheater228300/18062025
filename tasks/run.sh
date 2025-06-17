#!/bin/bash

if [ -z "$1" ]; then
    echo "Использование: $0 <номер_задачи>"
    exit 1
fi

TASK_NUM=$1

if [ "$TASK_NUM" -ge 1 ] && [ "$TASK_NUM" -le 50 ]; then
    DIR="001-050"
elif [ "$TASK_NUM" -ge 51 ] && [ "$TASK_NUM" -le 100 ]; then
    DIR="051-100"
elif [ "$TASK_NUM" -ge 101 ] && [ "$TASK_NUM" -le 150 ]; then
    DIR="101-150"
elif [ "$TASK_NUM" -ge 151 ] && [ "$TASK_NUM" -le 200 ]; then
    DIR="151-200"
elif [ "$TASK_NUM" -ge 201 ] && [ "$TASK_NUM" -le 250 ]; then
    DIR="201-250"
elif [ "$TASK_NUM" -ge 251 ] && [ "$TASK_NUM" -le 300 ]; then
    DIR="251-300"
elif [ "$TASK_NUM" -ge 301 ] && [ "$TASK_NUM" -le 333 ]; then
    DIR="301-333"
else
    echo "Диапазон задачи не поддерживается"
    exit 1
fi

TASK_DIR="$DIR/$(printf "%03d" $TASK_NUM)"

if [ ! -d "$TASK_DIR" ]; then
    echo "Папка задачи $TASK_DIR не найдена!"
    exit 1
fi

cd "$TASK_DIR" || exit

gcc -I. *.c -o main >/dev/null 2>&1
if [ $? -ne 0 ]; then
    echo "Ошибка сборки!"
    exit 1
fi

./main
