#!/bin/bash 
read x
read y
if [ $x -lt $y ]
then 
    echo "X is less than Y"
elif [ $x -gt $y ]
then
    echo "X is greater than Y"
elif [ $x -eq $y ]
then 
    echo "X is equal to Y"
fi
#You can test the flow using if the following are the supported options :

#operator	produces true if...				number of operands
#-n	operand non zero length						1
#-z	operand has zero length						1
#-d	there exists a directory whose name is operand			1
#-f	there exists a file whose name is operand			1
#-eq	the operands are integers and they are equal			2
#-neq	the opposite of -eq						2
#=	the operands are equal (as strings)			        2
#!=	opposite of =							2
#-lt	operand1 is strictly less than operand2 (both operands should be integers)	2
#-gt	operand1 is strictly greater than operand2 (both operands should be integers)	2
#-ge 	Operand1 is greater than or equal to operand2 (both operands should be integers)	2
#-le	operand1 is less than or equal to operand2 (both operands should be integers)	
