#include <stdio.h>
#include <conio.h>

int main(){
int x;
clrscr();
printf("\nEnter your number :");
scanf("%d", &x);
if (x>= 0)
printf("\nThis number is Positive");
else
printf("\nThis number is Negative");
getch ();
return 0;
}