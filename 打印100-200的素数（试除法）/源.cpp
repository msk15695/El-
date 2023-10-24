#include<stdio.h>

int main(void)
{
	int i = 0, j = 0, count = 0;
	for (i = 100;i <= 200;i++)
	{
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
	    if (i == j)
			{
				printf(" %d", i);
				count++;
			}
		
	}
	printf("\ncount=%d", count);
	return 0;
}
