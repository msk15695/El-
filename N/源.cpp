#include<stdio.h>

int main(void)
{
	int age = 0;
	scanf_s("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if(age >= 18 && age <= 50)
		printf("����\n");
	else if(age > 50 && age <= 90)
		printf("����\n");

	return 0;

}