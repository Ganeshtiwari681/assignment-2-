//Write a C program to enter a five digit number and find sum and difference of all digit.
#include<stdio.h>
void main()
{
	 int a,b,c,d,sum=0,dif=0;
	 printf(" enter the five digit number");
	 scanf("%d",&a);
	 c=a;
	 
	 while(a!=0)
	 {
	    b=a%10;
		sum=sum+b;
		a=a/10;	
	 }
	 
	 while(c!=0)
	 {
	 	d=c%10;
	 	dif=d-dif;
	 	printf("\n %d",dif);
	 	c=c/10;
	 	
	 }
	 printf("sum of five digit number is %d",sum);
	 printf("\nDifference of five digit number is %d",dif);
}
