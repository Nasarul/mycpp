f#include <stdio.h>
#include <conio.h>

void main(){

int i, s=0, n;
clrscr();

printf("Enter the valu of n serice: ");
scanf("%d",&n);
for(i=0; i<=n; i++)
	{
	s= s+i;
	}
printf("The sum of %d serice is: %d", n, s);
getch();
}