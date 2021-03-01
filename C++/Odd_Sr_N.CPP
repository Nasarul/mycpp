#include <stdio.h>
#include <conio.h>

void main(){

int i=1, n;
clrscr();

printf("Enter the end valu of the odd serice: ");
scanf("%d", &n);
printf("The odd serice is: ");
for(; i<=n;){
printf("%d ", i);
i=i+2;
}
getch();
}