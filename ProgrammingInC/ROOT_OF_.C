//find the roots of quadratic equation?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float r1,r2,a,b,c,d;
clrscr();
printf("Give the values of a,b and c,respectly");
scanf("%f%f%f",&a,&b,&c);
d=sqrt(b*b-4*a*c);
r1=(-b+d)/2*a;
r2=(-b-d)/2*a;
printf("root1 is %f \n and \n root2 is %f",r1,r2);
getch();
}