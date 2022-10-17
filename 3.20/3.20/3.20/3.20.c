#include <stdio.h>
#include <stdlib.h>
int main()
{
	float h,r,s;
	while (1)
	{
		printf("\nEnter # of hours worked (-1 to end):");
		scanf_s("%f", &h);
		if (h == -1)break;
		printf("\nEnter hourly rate of the worker ($00.00):");
		scanf_s("%f", &r);
		if (h <= 40) s = h * r;
		else s = 40 * r + (h - 40)*r*1.5;
		printf("\nSalary is:%.2f\n", s);
	}
	system("pause");
	return 0;
}