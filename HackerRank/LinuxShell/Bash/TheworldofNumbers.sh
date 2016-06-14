#!/bin/bash
# Fo ur lines containing the sum (x1+x2), difference (x1-x2), product (x1*x2), and quotient (x1/x2), respectively. 
#(While computing the quotient, print only the integer part.(x1/x2)%0)
#I was thinking that the arithmethic operations in bash would be easy, but apparently and according to the discussion in http://unix.stackexchange.com/questions/93029/how-can-i-add-subtract-etc-two-numbers-with-bash#
#it's a nigthmare :
#Three Options: 
#Use expr to make operations,this will create a fork and will make all the operation but to the scripting.
#Use the read and then output using echo and pipe this to bc.
#The scripting hardone In scripting $(()) is preferable since it avoids a fork/execute for the expr command.

#echo "$(($num1+$num2))"

read x1
read x2
echo `expr $x1 + $x2`   
echo `expr $x1 - $x2`   
echo `expr $x1 \* $x2`   
echo `expr $x1 / $x2` 

