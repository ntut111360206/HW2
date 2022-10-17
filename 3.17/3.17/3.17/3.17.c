#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	float b, charges, credits, limit, nb;
	while(1)
	{
		printf("\n");
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &n);
		printf("\n");
		if (n == -1)break;

		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("\n");

		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("\n");

		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("\n");

		printf("Enter credits limit:");
		scanf_s("%f", &limit);
		printf("\n");

		nb = b + charges - credits;
		if (nb > limit)
		{
			printf("Account:%d\n", n);
			printf("Credit limit:%.2f\n", limit);
			printf("Balance:%.2f\n", nb);
			printf("Credit Limit Exceeded.\n");
		}
	} 
	system("pause");
	return 0;
}