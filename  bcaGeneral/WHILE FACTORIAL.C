//find the factorial of the given no by the user?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int factorial=1,n;
clrscr();
printf("Give the value of n \n");
scanf("%ld",&n);
while(n>=1)
{
factorial=factorial*n;
n--;
}
printf("the factorial of the given no is %ld",factorial);
getch();
}
