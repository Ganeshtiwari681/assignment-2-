// Write a C program to enter a four digit number and print all digit.
#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf(" enter the number a= ");
	scanf("A=%d",&a);
	b=a;
	while(a!=0)
	{ 
	   a=a/10;
	   c++;
	}
	if(c==4)
	
	printf("four digit number is %d ",b);
	else
	printf("number digit id not equal to four ");
}
