//  Write a C program A relational operator checks the relationship between two operands. 
//If the relation is true, it returns 1; if the relation is false, it returns value 0.
/*Operator    Meaning of Operator    Example

==    Equal to              
   5 == 3 is evaluated to 0

>    Greater than              
   5 > 3 is evaluated to 1

<    Less than              
   5 < 3 is evaluated to 0

!=    Not equal to              
   5 != 3 is evaluated to 1

>=    Greater than or equal to      5 >= 3 is
evaluated to 1

<=    Less than or equal to           5
<= 3 is evaluated to 0*/
#include<stdio.h>
void main()
{
	int a=5,b=3,res;
	res = a==b?1:0;
	printf("%d==%d is evaluate to %d\n",a,b,res);
	res = a>b?1:0;
	printf("%d>%d is evaluate to %d\n",a,b,res);
	res = a<b?1:0;
	printf("%d<%d is evaluate to %d\n",b,a,res);
    res = a!=b?1:0;
	printf("%d!=%d is evaluate to %d\n",a,b,res);
	res = a<=b?1:0;
	printf("%d<=%d is evaluate to %d\n",a,b,res);
	res = a>=b?1:0;
	printf("%d>=%d is evaluate to %d",a,b,res);
}