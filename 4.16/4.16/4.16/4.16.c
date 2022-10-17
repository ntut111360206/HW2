#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k=0;
	printf("\n(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)printf("%s", "*");
			else  printf(" ");
		}
		printf("\n");
	}
	printf("\n(D)");
	for (i = 0; i <= 10; i++)
	{
		for (k = 9; k >= i; k--)printf(" ");
		for (j = 0; j < i; j++)printf("%s", "*");
		printf("\n");
	}
	system("pause");
	return 0;
}