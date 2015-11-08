//WAP using conditional operator.
#include<conio.h>
#include<stdio.h>
void main(){
int great,a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
great=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("%d",great);
getch();
}