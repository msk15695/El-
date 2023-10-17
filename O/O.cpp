#include<stdio.h>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("更大值为 %d\n",max);
	return 0;
}