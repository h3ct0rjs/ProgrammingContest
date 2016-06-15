#!/bin/bash
#Given three integers (, , and ) representing the three sides of a
#Triangle, identify whether the triangle is Scalene, Isosceles,
#or Equilateral.
read x
read y
read z

if [ $z -ne $y ] && [ $z -ne $x ]  && [ $x -ne $y ] 
then 
    echo "SCALENE"
elif [ $z -eq $y ] && [ $z -eq $x ] && [ $x -eq $y ]
then 
    echo "EQUILATERAL"
elif [ $z -eq $y ] || [ $z -eq $x ] || [ $x -eq $y ]
then
    echo "ISOSCELES"

fi
