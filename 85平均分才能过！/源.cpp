#include<stdio.h>

int main(void)
{
	int a=0, b=0, c=0, d=0, p=0 ;
	long long int num;
	char sex=0;
	printf("������ѧ�ţ�");
	scanf_s("%lld", &num);
	printf("�������Ա�f or m����");
	getchar();
	scanf_s("%c", &sex);
	printf("�������ĿƳɼ�:");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	p = (a + b + c + d) / 4;
	if (p > 85)
	{
		printf("%lld y", num);
	}
	else
	{
		printf("%lld n", num);
	}

	return 0;
}