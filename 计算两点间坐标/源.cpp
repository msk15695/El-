#include<stdio.h>
#include<math.h>

int main(void)
{
	float x1=0 ;
	float x2=0 ;
	float y1=0 ;
	float y2=0 ;
	float end1 = 0;
	float end = 0;
	printf("请输入坐标（%.2f,%.2f),(%.2f,%.2f)\n",x1,x2,y1,y2);
	scanf_s("%f %f %f %f", &x1, &x2, &y1, &y2);
	end1 = pow(x1 - y1,2) + pow(x2 - y2 ,2);
	end = sqrtf(end1);
	printf("两点距离为:%f", end);
	return 0;

}