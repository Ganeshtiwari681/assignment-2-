//WAP to check weather year is leap or not using conditional operator.
#include<stdio.h>
void main()
{
	int year;
	printf("enter the year :");
	scanf("%d",&year);
	(year%4==0)?printf("%d leap year",year):printf("%d non year",year);
}
