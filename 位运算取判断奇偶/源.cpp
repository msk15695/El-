#include<stdio.h>

int main(void)
{
	int num = 0;
	int lowest_bit = 0;
	printf("������һ��������");
	scanf_s("%d", &num);
	lowest_bit = num & 1;
	if (lowest_bit == 0)
		printf("e");
	else if (lowest_bit == 1)
		printf("o");
	return 0;
}