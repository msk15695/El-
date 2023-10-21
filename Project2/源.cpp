#include<stdio.h>

int main(void)
{
	float seamile;
	float mile;
	printf("请输入公里数：");
	scanf_s("%f\n", &mile);
	seamile = mile / 1.852;
	printf("转化海里为：%f\n", seamile);
	return 0;
}