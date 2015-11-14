//How to add two array or string.

//output is not coming.

#include<conio.h>
#include<stdio.h>
void main(){
char name[20],surname[20],fullname[40];
int len;
clrscr();
puts("enter your name");
gets("name");
puts("enter your surname");
gets("surname");
strcat(fullname,name);
strcat(fullname,surname);
printf("%s is the fullname",fullname);
}