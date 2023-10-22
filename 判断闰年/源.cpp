#include<stdio.h>

int main(void)
{
	int year = 0;
	printf("请输入一个年份：");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 400 != 0) || year % 400 == 0)
		printf("闰年");
	else
		printf("不是闰年");
	return 0;
}