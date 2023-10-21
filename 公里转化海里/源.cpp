#include<stdio.h>

int main(void)
{
	float mile = 0;
	float seamile = 0;
	printf("请输入公里数：");
	scanf_s("%f", &mile);
	seamile = mile / 1.825;
	printf("海里数为：%f", seamile);
	return 0;
}