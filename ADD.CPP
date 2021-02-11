#include <stdio.h>
#include <conio.h>

int main(){
clrscr();
int num1, num2, sum;
printf("Enter your first number:  ");
scanf("%d", &num1);
printf("Eter your second number:  ");
scanf("%d", &num2);
sum = num1 + num2;
printf("Total:, %d", sum);
//getch();
return 0;
}
