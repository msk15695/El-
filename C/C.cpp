#include<stdio.h>

int main(void)
{
	int line = 0;
	printf("��ʼѧc\n");
	while (line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("���Ǵ�ţ��!!!!!!!!!!!");
	return 0;
}