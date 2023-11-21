//Write a C program to enter a five digit number and find sum and differenceof 1st , 3rd , 5th digit number.
#include<stdio.h>
void main()
{

	int a,b,c,d,n=0,sum=0,dif=0;
	printf(" enter the five number :");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{ b=a%10;
	n++;
	  if(n==1||n==3||n==5)
	  {
	  	sum=sum+b;
	  	dif=b-dif;	
	  }
	  a=a/10;
	}
	printf("sum=%d \n dif=%d",sum,dif);
}