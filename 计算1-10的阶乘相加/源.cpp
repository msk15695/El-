#include<stdio.h>

int main(void)
{
	long int i = 1, n = 1, end1 = 1, end = 0;
	for (n=1;n<=10;n++)
	{
		end1 = 1;
		for (i=1;i <= n;i++)
		{
			end1 = end1 * i;
		}
		end = end + end1;
	}
	printf("½á¹ûÎª:%d", end);
	return 0;
}