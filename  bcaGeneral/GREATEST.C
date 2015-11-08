//find the greatest hight?
#include<conio.h>
#include<math.h>
#include<stdio.h>

void main() {
int a,b,c,max_height;
clrscr();
printf("Give three heights \n");
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&&(a>c))
max_height=a;
if(b>c)
max_height=b;
else
max_height=c;
printf("the max_height is %d",max_height);
getch();
}