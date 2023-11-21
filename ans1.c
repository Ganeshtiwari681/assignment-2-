//WAP to find maximum between two numbers using conditional operator.
#include<stdio.h>
void main()
{
   int a,b;
   printf(" Input first number :");
   scanf(" %d",&a);
   printf(" Input second number :");
   scanf(" %d",&b);
   int max= a>b?a:b;
   printf(" maximum number is :%d",max);
   
}
