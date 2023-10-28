#include<stdio.h>

int main(void)
{
	int m = 0, n = 0, end = 0;
	for (m = 1;m <= 9;m++)
	{		
		printf("%d:\n", m);
		for (n = 1;n <= m;n++)
		{
			end = m * n;
			printf("%d*%d=%2d ", m, n, end);
	
		}
		printf("\n");
	}
	return 0;
}