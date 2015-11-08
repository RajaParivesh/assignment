//find prime number   (madam class work)
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2;
clrscr();
printf("Give the values of n \n");
scanf("%d",&n);
while(i<=n/2){
if(n%i==0){
printf("not a prime number");
break;
}
i++;
}
if(i>n/2)
printf("number is prime number");

getch();

}