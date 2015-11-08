//find the fibonacci series?
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i;
clrscr();
printf("Give the values of n  \n");
scanf("%d",&n);
printf("0 \n 1\n");
for(i=3;i<=n;i++){
c=a+b;
printf("%d \n",c);
a=b;
b=c;
}
getch();
}