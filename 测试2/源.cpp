//�ж�һ�����Ƿ�Ϊ��������ӡ
#include<stdio.h>

int main(void)
{
	int num1;
	scanf_s("%d", & num1);
	if (num1 % 2 == 0)
	printf("������Ϊ����%d\n", num1);
	else
		printf("����Ϊ����%d\n", num1 );
	return 0;
}