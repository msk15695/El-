#include<stdio.h>

int main(void)
{
	int input = 0;
	printf("进入大学\n");
	printf("你要好好学习吗(0 or 1)>:");
	scanf_s("%d", &input);

	if (input == 0)
	printf("好offer");
	else
	printf("回家卖包菜");
	return 0;

}