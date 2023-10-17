#include<stdio.h>
#include<iostream>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

using namespace std;
int main(void)
{
	int num1=0, num2=0, num3=0;
	cin >> num1 >> num2;
	num3 = Max(num1,num2);
	cout << num3;
	return 0;
}