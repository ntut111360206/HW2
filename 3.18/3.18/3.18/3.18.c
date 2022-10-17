#include <stdio.h>
#include <stdlib.h>
int main()
{
	float s,sum;
	while (1)
	{
		printf("\nEnter sales in dollars(-1 to end):");
		scanf_s("%f", &s);
		if (s == -1)break;
		sum = s * 0.09 + 200;
		printf("Salary is:%.2f",sum);
	}
	system("pause");
	return 0;
}