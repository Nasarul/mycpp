#include <stdio.h>
#include <conio.h>

int main(){

int num1, num2, num3; 
clrscr();
printf("Enter your three numbers: ");
scanf("%d %d %d",&num1, &num2, &num3);

if (num1 > num2 && num1 > num3)
	{
	printf("Number 1 is geterthen number 2 & number 3");
	}
	else if
<<<<<<< HEAD:Com_3_Num.CPP
=======
	{
>>>>>>> 3f5c3189a2d4d4c860fdb67902ac88f8512a741c:3NUM.CPP
		if (num2 > num1 && num2 > num3)
		{
		printf("Number 2 is geterthen number 1 & number 3");
		}
<<<<<<< HEAD:Com_3_Num.CPP
=======
	}
>>>>>>> 3f5c3189a2d4d4c860fdb67902ac88f8512a741c:3NUM.CPP
	else
	{
		printf("Number 3 is geterthen number 1 & number 2");
	}

getch();
return 0;
}
