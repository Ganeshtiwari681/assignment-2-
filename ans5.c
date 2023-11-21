//WAP to check weather the character is alphabet or not using coditional opertor/
#include<stdio.h> 
void main()
{
	 char ch;
	 printf(" input character : ");
	 scanf(" %c",&ch);
	 ch>='A'&& ch<='Z'|| ch>='a'&&ch<='z'?printf("%c is charcter",ch):printf(" %c is not chracter",ch);
}