#include<stdio.h>

int main(void)
{
	int n = 0, end = 0, i = 0;
	printf("������n��ֵ��");
	scanf_s("%d", &n);
	while (i <= n)
	{
		end = i + end;
		i++;
	}
	printf("endֵΪ��%d", end);
	return 0;
}