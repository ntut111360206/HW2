#include <stdio.h>
#include <stdlib.h>
int main()
{
	float p,r,i;
	int d;
	while (1)
	{
		printf("\nEnter loan principal(-1 to end):");
		scanf_s("%f", &p);
		if (p == -1)break;
		printf("\nEnter interest charge:");
		scanf_s("%f", &r);
		printf("\nEnter term of the loan in days:");
		scanf_s("%d", &d);
		i=p*r*d/365;
		printf("\nThe interest charge is:%.2f\n", i);
	}
	system("pause");
	return 0;
}