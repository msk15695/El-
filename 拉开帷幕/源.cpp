#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>


int main(void)
{
	char say[] = "El Psy Congroo!";
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
		printf("%s\n",curtain );
		return 0;
}