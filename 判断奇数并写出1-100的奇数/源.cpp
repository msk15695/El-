#include<stdio.h>

int main(void)
{
	int num1 = 0;
	while(num1<=100 && num1>=0)
	{
		if (num1 % 2 == 1)
			printf("此数为奇数%d\n", num1);
		else
			printf("此数为偶数%d\n",num1);
		num1++;
	}
	return 0;
}