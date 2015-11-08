//write a code using conditional operator?
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,great;
clrscr();
printf("Give the values of a and b \n");

scanf("%d%d%d",&a,&b,&c);

great=(a>b)?a:((b>c)?b:c);//take care,this is the use of conditional operation.

printf("great is \n %d",great);
getch();
}