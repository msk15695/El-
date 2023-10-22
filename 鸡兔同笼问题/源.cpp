#include<stdio.h>

int main(void)
{
	int h = 0, f = 0, zy = 0, two = 0;
	printf("请输入只因和兔的总头数，总脚数：");
	scanf_s("%d%d", &h ,&f);
	zy = 2 * h - (1.0 / 2) * f;
	two = (1.0 / 2) * f - h;
	printf("只因的数量为%d 兔的数量为%d", zy, two);
	return 0;

}