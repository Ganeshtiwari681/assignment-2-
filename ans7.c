//wap in to perform mathematical operation such as add,sub,multi,divide etc on numerical values
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,ad,s,d,m,r;
	printf("Input the numbers :");
	scanf("%d\n %d",&a,&b);
	ad=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	r=a%b;
	printf("\n add =%d",ad);
	printf("\n sub =%d",s);
    printf("\n multiple =%d",m);
	printf("\n divide =%d",d);
	printf("\n Remainder a by b =%d",r);
}

