#include<stdio.h>

int main(void)
{
	int h = 0, f = 0, zy = 0, two = 0;
	printf("������ֻ����õ���ͷ�����ܽ�����");
	scanf_s("%d%d", &h ,&f);
	zy = 2 * h - (1.0 / 2) * f;
	two = (1.0 / 2) * f - h;
	printf("ֻ�������Ϊ%d �õ�����Ϊ%d", zy, two);
	return 0;

}