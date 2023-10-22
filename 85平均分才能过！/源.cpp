#include<stdio.h>

int main(void)
{
	int a=0, b=0, c=0, d=0, p=0 ;
	long long int num;
	char sex=0;
	printf("请输入学号：");
	scanf_s("%lld", &num);
	printf("请输入性别（f or m）：");
	getchar();
	scanf_s("%c", &sex);
	printf("请输入四科成绩:");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	p = (a + b + c + d) / 4;
	if (p > 85)
	{
		printf("%lld y", num);
	}
	else
	{
		printf("%lld n", num);
	}

	return 0;
}