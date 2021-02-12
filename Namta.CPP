#include <stdio.h>
#include <conio.h>

void main(){
int i, j, n;
clrscr();
printf("Enter which table you wnats to print: ");
scanf("%d", &n);

for (i=1; i<=10; i++)
{
j=i*n;
printf("%d X %d = %d\n", n, i, j);
}
getch();
}