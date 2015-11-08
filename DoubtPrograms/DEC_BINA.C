
// convertion of decimal to binary.
#include<conio.h>
#include<stdio.h>
void main()
{
//int a;
//clrscr();
//printf("enter a number decimal no.");
//scanf("%d",&a);
//printf("%h",a);
//getch();
//
int n,c,k;
printf("enter a decimal no. \n");
scanf("%d",&n);
printf("%d in binary no is \n",n);
for(c=31:c>=0;c--){
 k=n>>c;
 if(k&1)
   printf("1");
   else
   printf("0 \n");
}
}