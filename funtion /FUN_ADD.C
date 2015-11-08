#include<conio.h>
#include<stdio.h>

int add(int x,int y);

void main(){
int a,b,r;
clrscr();
printf("give the value of n\n");
scanf("%d%d",&a,&b);
r=add(a,b);
printf("Addition is %d",r);
}


int add(int x,int y){
return x+y;
}
