#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int pass=0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������->:");
	scanf("%s", &password);
	while((ch=getchar()) !='\n')
	{
		;
	}
	printf("��ȷ������(N/Y)->:");
	pass = getchar();
	if (pass == 'N')
	{
		printf("����ȷ��\n");
	}
	else
	{
		printf("ȷ�ϳɹ�\n");
	}
	return 0;

}