//find the even number?
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main() {
int a;
clrscr();
printf("Give a number");
scanf("%d",&a);
if (a%2==0)
printf("the given number is even %d");
else
printf("the give number is odd number %d");
getch();
}