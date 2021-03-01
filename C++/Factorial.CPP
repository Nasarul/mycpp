#include <stdio.h>
#include <conio.h>

void main(){
int i,j=1, n;
clrscr ();
printf("Enter the number you wants to Factorial: ");
scanf("%d", &n);
for(i=1; i<=n; i++){
j=i*j;
}
printf("The factorial of %d is: %d", n, j);
getch();
}