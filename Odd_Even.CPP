#include <stdio.h>
#include <conio.h>

int main(){
int x;
clrscr();
printf("\nEnter your number :");
scanf("%d", &x);
if (x % 2 == 0)
printf("\nThis number is Even");
else
printf("\nThis number is Odd");
getch ();
return 0;
}