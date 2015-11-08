//check vowel?
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("write a character \n");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("It is a vowel");
else
printf("it is not vowel");
getch();
}

