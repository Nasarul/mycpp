//Name: Md. Nasarul Hasan
//Rool: 18
//=====================================

//Question no: 01

#include <stdio.h>
#include <conio.h>

void main(){

int i, c, f;
clrscr();
printf("\nEnter your Celsius value : ");
scanf("%d", &c);
f=(c*1.8)+32;
printf("\nThe converted valu as Fahrenheit is: %d", f);
getch();
}


//Question no: 03

void main(){
int x;
clrscr();
printf("\nEnter your number : ");
scanf("%d", &x);
if (x % 2 == 0)
printf("\nThis number is Even");
else
printf("\nThis number is Odd");
getch ();
}


//Question no: 04

void main(){

int i;
clrscr();
printf("\nThe serice is: ");
for(i=1; i<=50; i++){
	printf("%d ", i);
	}
getch();
}


//Question no: 05

void main(){

int i, sum;
clrscr();
sum=0;

for(i=1; i<=50; i++){
	sum=sum+i;
	}
printf("\nThe sum of the serice is: %d", sum);
getch();
}


//Question no: 06

void main(){
int i,j=1, n;
clrscr ();
printf("Enter the number you wants to Factorial: ");
scanf("%d", &n);
for(i=1; i<=n; i++){
j=i*j;
}
printf("\nThe factorial of %d is: %d", n, j);
getch();
}


