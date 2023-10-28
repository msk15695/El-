#include<stdio.h>
#include<math.h>

int main(void)
{
	int i = 0, j = 0, count = 0;
	for (i = 101;i <=200 ;i+=2)
	{
		for (j = 2;j <=sqrt(i);j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (sqrt(i) < j)
		{
			printf(" %d", i);
			count++;
		}

	}
	printf("\ncount=%d", count);
	return 0;
}
