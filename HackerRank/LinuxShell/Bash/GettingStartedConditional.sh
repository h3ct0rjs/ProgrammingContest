#!/bin/bash 
read x
x="${x,,}"		#This convert whatever you put to lowercase.Available just in Bash4.0 and sup versions.

if [ "$x" == "y" ]
then 
     echo "YES"

elif [ "$x" == "n" ]
then 
   echo "NO"
fi 
