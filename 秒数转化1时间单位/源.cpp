#include<stdio.h>

int main(void)
{
	float s = 0;
	float hour = 0;
	float min = 0;
	printf("����һ������\n");
	scanf_s("%f", &s);
	hour = s/ 3600;
	min= s/ 60;
	printf("ת��СʱΪ%f h ת������Ϊ%f min ת������Ϊ%f s",  hour, min,s);
	return 0;

}