#include<stdio.h>
#include<conio.h>
//there is some problem in this code
//we have to simply print the avg of 50 termsusing while loop.
void main()
{
int n=1,sum=0,a=0,avg=0;
clrscr();
while(n<50){
a=a+1;
sum=sum+a;
avg=sum/n;
n++;
}
getch();
printf("%d is the avg",avg);
}

