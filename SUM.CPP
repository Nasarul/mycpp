#include<stdio.h>
#include<conio.h>

float pi = 3.1416; //global variable

void main(){
  clrscr();
  int num1,num2,sum; //local varibale of main function
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d",&num2);

  sum = num1 + num2;
  printf("Result is: %d",sum);


  getch(); /*getch() function is used to hold the
output screen*/
}

void addition(){
printf("%f",pi);
//printf("%d",sum);
}