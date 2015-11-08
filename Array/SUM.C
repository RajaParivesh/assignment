//WAP to find the sum of 10 number using array
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
int num[10],i,sum=0;
clrscr();
for(i=0;i<10;i++){
printf("\n Give one number, %d.no. is",i+1);
scanf("%d",&num[i]);
sum=sum+num[i];
}
printf("The sum of 10 given numbers are %d",sum);
}


