#include<stdio.h>
#include<conio.h>

void main(){
int i=10, j=15;
clrscr();
i=i+j;
j=i-j;
i=i-j;

printf("The swap valu of i = %d and j = %d", i, j);
getch ();
}