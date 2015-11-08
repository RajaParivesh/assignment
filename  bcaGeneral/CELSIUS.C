//convert celcius to kevin and farhenite.
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main() {
int k,c,f;
clrscr();
printf("write the celsius value \n");
scanf("%d",&c);
k=c+273;
f=c*9/5+32;
printf("The kelvin value is %d \n",k);

printf("the farhenit value is %d",f);
getch();
}