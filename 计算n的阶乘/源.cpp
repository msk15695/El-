#include<stdio.h>

int main(void)
{
	int n = 0, end = 0, i = 0;
	printf("请输入n的值：");
	scanf_s("%d", &n);
	while (i <= n)
	{
		end = i + end;
		i++;
	}
	printf("end值为：%d", end);
	return 0;
}