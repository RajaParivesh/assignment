//find the the factorial using for loop?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float factorial,n;
clrscr();
printf("give the value of n");
scanf("%f",&n);

for(factorial=1;n>=1;)
 {
    factorial=factorial*n;

    n--;
}
printf("factorial of given no. is %f",factorial);
getch();
}
