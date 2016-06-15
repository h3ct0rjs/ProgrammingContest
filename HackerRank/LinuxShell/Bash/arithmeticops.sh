#!/bin/bash 

read expresion
result=$(echo "scale=4;$expresion"|bc -l)
printf "%.3f\n" $result

