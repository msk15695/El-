#include<stdio.h>

int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0, left = 0, right = 0, sz = 0;
	sz = (sizeof(arr)) / sizeof(arr[0]);
	right = sz - 1;
	printf("����Ҫ���ҵ����֣�");
	scanf_s("%d", &i);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (i > arr[mid])
		{
			left = mid + 1;
		}
		else if (i < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���");
	return 0;

}