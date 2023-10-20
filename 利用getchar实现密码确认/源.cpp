#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main(void)
{
	int pass=0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码->:");
	scanf("%s", &password);
	while((ch=getchar()) !='\n')
	{
		;
	}
	printf("请确认密码(N/Y)->:");
	pass = getchar();
	if (pass == 'N')
	{
		printf("放弃确认\n");
	}
	else
	{
		printf("确认成功\n");
	}
	return 0;

}