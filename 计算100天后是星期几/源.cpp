#include<stdio.h>

int main(void)
{
	int today = 0;
	int total = 0;
	int end = 0;
	int day = 0;
	printf("今天是星期(请输入0~6的数字):\n");
	scanf_s("%d", &today);
	total = today + 100;
	end = total % 7;
		day = end;
		printf("一百天后为星期%d", day);
	return 0;
}