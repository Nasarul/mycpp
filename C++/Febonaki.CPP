#include <stdio.h>
#include <conio.h>

int main()
{
    clrscr();
    int i, s1 = 0, s2 = 1, c;
    printf("\n Fibonacci Series: ");

    for (i = 1; i <= 10; ++i) 
	{
		printf("%d ", s1);
		c = s1 + s2;
		s1 = s2;
		s2 = c;
	}
   getchar();
   return 0;
}
//Result: 0 1 1 2 3 5 9 13 21 34