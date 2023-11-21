/*An expression containing logical operator returns either 0 or 1 depending
upon whether expression results true or false. Logical operators are commonly
used in decision making in C programming.*/
#include<stdio.h>
void main()
{
	int a,b,res;
	printf(" enter the variable");
	scanf("%d %d",&a,&b);
	res= a==b && a==b;
	printf(" %d",res);
	res= a==b || a==b;
	printf("\n %d",res);
	res= (a!=b);
	printf("\n %d",res);
}
