#include<stdio.h>

int main(void)
{
	float num = 0;
	printf("请输入一个数字：\n");
	scanf_s("%f", &num);
	if (num < 0)
	{
		num = -1 * num;
	}
	else
	{
		num = num;
	}
	printf("绝对值为:%.2f",num);
	return 0;

}