#include<stdio.h>

int main(void)
{
	int m = 0, n = 0, r = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d", r);
	return 0;
}