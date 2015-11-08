//WAP to coonvert kg into pound?
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
float kg,pound;
clrscr();
printf("give the weight in kg \n");
scanf("%f",&kg);
pound=kg*2.24;       //1pound=2.24kg
printf("%f is the required wt in pound",pound);
getch();
}

