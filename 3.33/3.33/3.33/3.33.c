#include <stdio.h>
#include <stdlib.h>
int main()
{
	int l,b,i,j;
		printf("\nEnter length:");
		scanf_s("%d", &l);
		printf("\nEnter breadth:");
		scanf_s("%d", &b);

		for (i = 1; i <= l; i++)
		{
			for (j = 1; j <= b; j++)
			{
				if (i == 1 || i == l || j == 1 || j == b)printf("+");
				else printf(" ");
			}
			printf("\n");
		}
	system("pause");
	return 0;
}