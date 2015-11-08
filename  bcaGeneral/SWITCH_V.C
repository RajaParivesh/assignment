// not working???????????????????????????????


//check vowel and consonant using switch case.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
char ch;
clrscr();
printf("give a character n \n");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U':
printf("It is a vowel \n");
break;
default:
printf("it is not vowel");
}
getch(); // take care its place (it is VVVI)
}
