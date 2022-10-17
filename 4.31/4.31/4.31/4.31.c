#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j,k;
	for (i = 1; i <= 5; i++)
	{
		for (k = 0; k < 5 - i; k++)printf(" ");
		for (j = 1; j < i * 2 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (k = 1; k <= i; k++)printf(" ");
		for (j = 1; j < 10-(i * 2); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}