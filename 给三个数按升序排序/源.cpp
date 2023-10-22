#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, t = 0;
	printf("请输入三个整数:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;

	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("按升序排列为：%d%d%d", a, b, c);
	return 0;
}