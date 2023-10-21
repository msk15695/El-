#include<stdio.h>

int main(void)
{
	float base = 1.0;
	int input = 0;
	float end1 = 0;
	float end2 = 0;
	printf("你要努力or放任？输入1or0:\n");
	scanf_s("%d", &input);
	if (input == 1)
	{
		end1 = 365 * 0.01 + 1.0;
		printf("努力的结果为：%f\n", end1);
	}
	else
	{
		end2 = 1.0 - 365 * 0.01;
		printf("放任的结果为：%f\n", end2);
	}

	return 0;
	    
}