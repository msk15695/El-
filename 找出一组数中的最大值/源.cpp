#include<stdio.h>

int main(void)
{
	int arr[] = {-1,2,3,-4,5,6,7,8,9,-10};
	int i = 0, max = arr[0];
	int sz = (sizeof(arr)) / sizeof(arr[0]);
	for (i = 1;i < sz;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
			
	}
	printf("max= %d", max);
	return 0;
}