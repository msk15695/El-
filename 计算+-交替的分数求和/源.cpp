#include<stdio.h>

int main(void)
{
	int i = 0, k = 1;
	double end = 0;
	for (i = 1;i <= 100;i++)
	{
		end += k*(1.0 / i);
		k = -k;
	}
	printf("%lf", end);
	return 0;
}