#include<stdio.h>

int main(void)
{
	int year = 0;
	printf("������һ����ݣ�");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 400 != 0) || year % 400 == 0)
		printf("����");
	else
		printf("��������");
	return 0;
}