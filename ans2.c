//write a c program t find maximum between three number by conditional operators.
#include<stdio.h>
void main()
{
	int a,c,b,max;
	printf(" enter any three number :");
	scanf(" %d \n %d \n %d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf(" maximum number :%d",max);
}
