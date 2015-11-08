//WAP to reverse a number given by the user?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b=0,n;
int reverse=0; //take care that reverse is also in int type.
clrscr();
printf("give a number which contain more than one digit \n");
scanf("%d",&a);
while(a>0)
{ b=a%10;
  a=a/10;
  reverse=10*reverse+b;   //very very important statement
  }
  printf("%d is the reverse of the number",reverse);
  getch();
   }

