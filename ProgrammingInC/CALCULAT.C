//WAP to make a mini-calculator?
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int a,b,c=0;
clrscr();
printf("enter operation \n");
scanf("%c",&ch);
printf("enter 1st no. \n");
scanf("%d",&a);
printf("enter 2nd no.\n");
scanf("%d",&b);
switch(ch)
{
case'+':
printf("addition is %d",a+b);
break;
case '-':
printf("subtract is%d",a-b);
break;
case'/':
printf("division is %d",a/b);
break;
case'%':

default:

printf("it is invalid operation");
}
getch();
 }