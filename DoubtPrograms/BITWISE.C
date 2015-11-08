//write a program using(bitwise operation)i.e right_shift,left_shift,bitwise addition,multiplication,negative?
#include<conio.h>
#include<stdio.h>
void main()
{
int a=17,b=1,left_shift=0,add=0,mul=1,not,right_shift;
clrscr();

add=a|b;
mul=a&b; //(Take care)-----output is corret(because it is bitwie operation (hint: binary multiply i.e & ).
not=~b;  //doubt------not giving right output.
left_shift=a<<1;
right_shift=a>>2;
printf("%d  is add ,\n%d is mul,\n%d is not,\n%d is left shift,\n %dis the right shift",add,mul,not,left_shift,right_shift);
getch();
}