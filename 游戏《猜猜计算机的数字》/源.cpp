#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


int menu()
{
	printf("##################################\n");
	printf("##### 1. play ####### 0.exit #####\n");
    printf("##################################\n");
	return 0;
}

int cur()
{
	char say[] = "!!!!!!win!!!!!!";
	char curtain[] = "###############";
	int left = 0;
	int right = strlen(curtain) - 1;
	while (left <= right)
	{
		curtain[left] = say[left];
		curtain[right] = say[right];
		printf("%s\n", curtain);
		Sleep(1000);
		system("cls");
		left++;
		right--;

	}
	printf("%s\n", curtain);
	return 0;
}
int game()
{
	int s = 0, me = 0;
	s = (rand()%100)+1;
	while (1)
	{
		printf("请输入你猜的数字：");
	    scanf_s("%d", &me);
		if (me == s)
		{
			cur();
			break;
		}
		else if (me < s)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}
	}
	return 0;
}

int main(void)
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do {

		menu();
		printf("请选择：");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			printf("!!!!开始游戏!!!!\n");
			game();
			break;

		case 0:
			printf("###退出游戏###");
			break;

		default:
			break;
			printf("无效选择，请重选。");
		}
	} while (i);
		return 0;
}