#!/bin/bash
files=( *.c)
gcc -c -Wall -Werror -Wextra -pendantic "${files[@]}"
ar -rc liball.a "${files[@]/%.c/ .o}"
rm "${files[@]/%.c/ .o}"