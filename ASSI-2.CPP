#include <stdio.h>
#include <conio.h>

void main(){
  clrscr();
  int e, m, c;
  printf("Enter your m value: ");
  scanf("%d",&m);
  printf("Enter your c value: ");
  scanf("%d",&c);
  e = m * (c*c);
  printf("Your result of the e is: %d",e);
  getch();
}