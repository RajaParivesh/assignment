#include<conio.h>
#include<stdio.h>
int fact(int x);

void main(){
int n,r;
printf("give the value of n");
scanf("%d",n);
r=fact(n);
printf("factorial is %d",r);
}

int fact(int x){
while(n>0){
fact=fact*n;
n--;
}
return fact;
}
