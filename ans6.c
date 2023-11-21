//Write a C program to swap two numbers using bitwise operator.

#include<stdio.h>
void main()
{ 
  int a,b;
  scanf("%d %d",&a,&b);
  printf("element a=%d b=%d",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("swapped element a=%d b=%d",a,b);
}