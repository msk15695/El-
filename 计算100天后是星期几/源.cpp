#include<stdio.h>

int main(void)
{
	int today = 0;
	int total = 0;
	int end = 0;
	int day = 0;
	printf("����������(������0~6������):\n");
	scanf_s("%d", &today);
	total = today + 100;
	end = total % 7;
		day = end;
		printf("һ�����Ϊ����%d", day);
	return 0;
}