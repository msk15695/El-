#include<stdio.h>

int main(void)
{
	int age = 0;
	scanf_s("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if(age >= 18 && age <= 50)
		printf("成年\n");
	else if(age > 50 && age <= 90)
		printf("老年\n");

	return 0;

}