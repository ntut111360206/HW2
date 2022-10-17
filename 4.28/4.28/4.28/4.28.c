#include <stdio.h>
#include <stdlib.h>
int main()
{
	int code;
	float s1, s2, hw2, h2, ws3, s3, s4;
	while (1)
	{
		printf("input your code(-1 to end)\n");
		scanf_s("%d", &code);
		if (code == -1)break;
		switch(code)
		{
			//managers
			case 1:
				printf("input your weekly salary\n");
				scanf_s("%f", &s1);
				printf("Your salary is %.1f\n", s1);
				break;
			//hourly workers
			case 2:
				printf("input your hours salary and hours you worked\n");
				scanf_s("%f %f", &h2, &hw2);
				if(hw2<=40)s2 = h2 * hw2;
				else s2 = 40 * h2 + (hw2 - 40)*1.5*h2;
				printf("Your salary is %.1f\n", s2);
				break;
			//commission workers
			case 3:
				printf("input your gross weekly sales\n");
				scanf_s("%f", &ws3);
				s3 = 250 + ws3 * 0.57;
				printf("Your salary is %.1f\n", s3);
				break;
			//pieceworkers
			case 4:
				printf("input your salary\n");
				scanf_s("%f", &s4);
				printf("Your salary is %.1f\n", s4);
				break;
		}
	}
	system("pause");
	return 0;
}