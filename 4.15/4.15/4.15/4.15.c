#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	//FV �� PV�ѡ]1 �� R�^n ����FV ���������Q�M�APV �����쥻���AR ���C���Q�v�An ������
	int i;
	double r=10.0,fv;
	for (i = 0; i < 5; i++)
	{
		fv = 5000 * pow((1 + r), 15);
		printf("If rate is %.1f , FV=%.2f\n", r, fv);
		r = r + 0.5;
	}
	system("pause");
	return 0;
}