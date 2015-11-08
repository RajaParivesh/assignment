// WAP to search a number using array
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
int search=20,num[10],flag=0,i;
clrscr();
for(i=0;i<10;i++){
printf("Give a number, %d.no is");
scanf("%d",num[i]);
if(num[i]==search){
printf("no. is present");
flag=1
break;
}
if(flag=0)
printf("no.is not found");
}

