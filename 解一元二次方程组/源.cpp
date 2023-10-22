#include<stdio.h>
#include<math.h>

int main(void)
{
	float a, b, c, x, x1, x2, delta;
	printf("请输入三个系数：");
	scanf_s("%f%f%f", &a, &b, &c);
	//a* x* x + b * x + c = 0;
	delta = b * b - (4 * a * c);
	if (delta >= 0)
	{
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		printf("x1=%.2f x2=%.2f", x1, x2);

	}
	else
	{
		printf("输入数据不正确！");
	}

	return 0;

}
