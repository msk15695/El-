#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, a1 = 0, a2 = 0, b1 = 0, b2 = 0, c = 0;
	printf("请输入第一个两位整数：");
	scanf_s("%d", &a);
	printf("请输入第二个两位整数：");
	scanf_s("%d", &b);
	a1 = a / 10;
	a2 = a % 10;
	b1 = b / 10;
	b2 = b % 10;
	c = a1 * 100 + a2 + b1 * 10 + b2 * 1000;
	printf("最终四位数为：%d", c);
	return 0;

}