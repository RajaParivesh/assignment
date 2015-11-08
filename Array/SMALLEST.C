#include<stdio.h>
//WAP to find the smallest number using array
#include<conio.h>
#include<string.h>
void main(){
int num[10],i,smallest;
clrscr();
for(i=0;i<10;i++)
{
printf("\n enter one number, %d.no is :-",i+1);
scanf("%d",&num[i]);
smallest=num[0];
if(num[i]<smallest)
smallest=num[i];
}
printf("\n The smallest number is %d",smallest);
}