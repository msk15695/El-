#include<stdio.h>

int main(void)
{
	float base = 1.0;
	int input = 0;
	float end1 = 0;
	float end2 = 0;
	printf("��ҪŬ��or���Σ�����1or0:\n");
	scanf_s("%d", &input);
	if (input == 1)
	{
		end1 = 365 * 0.01 + 1.0;
		printf("Ŭ���Ľ��Ϊ��%f\n", end1);
	}
	else
	{
		end2 = 1.0 - 365 * 0.01;
		printf("���εĽ��Ϊ��%f\n", end2);
	}

	return 0;
	    
}