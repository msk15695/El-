#include<stdio.h>

int main(void)
{
	int line = 0;
	printf("开始学c\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("你是大牛辣!!!!!!!!!!!");
	return 0;
}