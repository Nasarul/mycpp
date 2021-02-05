//Assignment 3:

#include <stdio.h>
#include <conio.h>

void main(){
  clrscr();
  int length, width, area;
  printf("Enter the valu of length: ");
  scanf("%d", &length);
  printf("Enter the valu of width: ");
  scanf("%d", &width);
  area = length * width;
  printf("Area of the rectangle is: %d", area);
  getch();
}
