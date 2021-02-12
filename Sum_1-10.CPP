#include <stdio.h>
#include <conio.h>

void main(){

int i=0, s=1, n; 
clrscr();

for(i=1; i<=10; i++)
	{
	s= s*i;
	printf("The result is: ", s);
        }
getch();
}