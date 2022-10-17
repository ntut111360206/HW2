#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float c;
	int i, j;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			c =sqrt(i*i + j * j);
			if (c - (int)c == 0 && c <= 500)
				printf("When side1=%d side2=%d,hypotenuse is integer %.0f\n", i, j, c);
		}
	}
	
	
	system("pause");
	return 0;
}