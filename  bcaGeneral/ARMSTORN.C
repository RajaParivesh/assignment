//WAP for armstrong.
#include<stdio.h>
#include<conio.h>
void main(){
long int a,b,cube=0;
while(a>0){
b=a%10;
a=a/10;
cube=cube+b*b*b;
}
if(cube=a)
printf("It is armstrong number");
else
printf("It is not an armstong number");
getch();
}