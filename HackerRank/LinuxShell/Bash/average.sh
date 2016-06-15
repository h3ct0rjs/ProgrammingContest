#!/bin/bash
read n
sumap=0;
for ((i=1;i<=$n;i++))
do
        read temp
        sumap=$((sumap + temp))
done
printf "%.3f" $(echo "scale=10; $sumap/$n" | bc -l)

