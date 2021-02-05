#include <stdio.h>
#include <conio.h>

int main()
{
	int n, i;
	printf("Enter the number of n: ");
	scanf("%d", &n);
	printf("All odd numbers from 1 to %d are: \n", n);
	for (i=1; i<=n; i=+2)
	{
	printf("%d", i);
	}
	getch();
    return 0;
}