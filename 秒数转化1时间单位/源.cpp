#include<stdio.h>

int main(void)
{
	float s = 0;
	float hour = 0;
	float min = 0;
	printf("输入一个秒数\n");
	scanf_s("%f", &s);
	hour = s/ 3600;
	min= s/ 60;
	printf("转化小时为%f h 转化分钟为%f min 转化秒数为%f s",  hour, min,s);
	return 0;

}