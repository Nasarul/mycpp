#include <stdio.h>
#include <conio.h>

int main()
{
clrscr();
int num1, num2, num3;
printf("Enter the value of Number 1, Number 2 and Number 3:\n");
//Get three munbers
scanf("%d %d %d", &num1, &num2, &num3);

   if(num1 > num2 && num1 > num3)
      printf("Number 1 is greatest\n");

   else if(num2 > num3 && num2 > num1)
      printf("Number 2 is greatest\n");

   else
      printf("Number 3 is greatest\n");

getch();
return 0;
}