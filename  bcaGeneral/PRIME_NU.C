//find the prime no using for loop.
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main() {
int n,i;
clrscr();
printf("give the value of n \n");
scanf("%d",&n);
for(i=2;i<=n/2;i++){
     if(n%i==0){
	    printf("it is not a prime no \n");
break;
     }
}
     if(i>n/2)
       printf("it is a prime no");
getch();
}


