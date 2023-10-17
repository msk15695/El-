//判断一个数是否为奇数并打印
#include<stdio.h>

int main(void)
{
	int num1;
	scanf_s("%d", & num1);
	if (num1 % 2 == 0)
	printf("此数不为奇数%d\n", num1);
	else
		printf("此数为奇数%d\n", num1 );
	return 0;
}