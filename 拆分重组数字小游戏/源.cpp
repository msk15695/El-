#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, a1 = 0, a2 = 0, b1 = 0, b2 = 0, c = 0;
	printf("�������һ����λ������");
	scanf_s("%d", &a);
	printf("������ڶ�����λ������");
	scanf_s("%d", &b);
	a1 = a / 10;
	a2 = a % 10;
	b1 = b / 10;
	b2 = b % 10;
	c = a1 * 100 + a2 + b1 * 10 + b2 * 1000;
	printf("������λ��Ϊ��%d", c);
	return 0;

}