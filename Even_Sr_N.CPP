#include <stdio.h>
#include <conio.h>

void main(){

int i=2, n;
clrscr();

printf("Enter the end valu of the even serice: ");
scanf("%d", &n);
printf("The even serice is: ");
for(; i<=n;){
printf("%d ", i);
i=i+2;
}
getch();
}