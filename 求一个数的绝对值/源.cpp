#include<stdio.h>

int main(void)
{
	float num = 0;
	printf("������һ�����֣�\n");
	scanf_s("%f", &num);
	if (num < 0)
	{
		num = -1 * num;
	}
	else
	{
		num = num;
	}
	printf("����ֵΪ:%.2f",num);
	return 0;

}