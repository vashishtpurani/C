#!/bin/bash
# Run any c programm
echo Hello, spell name of c program without .c
read pname
gcc $pname.c -o $pname
echo There you go 
echo
./$pname
