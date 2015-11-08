//find the factorial using do-while loop?
#include<stdio.h>
#include<conio.h>
void main()

{
long int factorial=1,n;
clrscr();
printf("write the value of n \n");
scanf("%ld",&n);
do{
    factorial=factorial*n;
    n--;
    }
while(n>=1);

printf("the factorail is %ld",factorial);
getch();
}
