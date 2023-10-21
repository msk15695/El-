#include<stdio.h>

int main(void)
{
	float base = 1.0;
	float end1 = 0;
	float end2 = 0;
	float end = 0;
	end1 = base + 365 * 0.01;
	end2 = base - 365 * 0.01;
	end = end1 - end2;
	printf("×îÖÕ²îÖµÎª£º%f", end);
	return 0;

}