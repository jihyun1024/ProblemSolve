#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	long a = 0;
	double b = 0;
	double c = 0;
	int arr[1000] = { 0, };
	int max = 0;
	scanf("%d", &a);
	
	for (int cnt_i = 0; cnt_i < a; cnt_i++)
	{
		scanf("%d", &arr[cnt_i]);
	}

	for (int cnt_k = 0; cnt_k < a; cnt_k++)
	{
		if (arr[cnt_k] > max)
		{
			max = arr[cnt_k];
		}
	}

	for (int cnt_j= 0; cnt_j < a; cnt_j++)
	{
		b += (double)arr[cnt_j] / max * 100;
	}
	c = b / a;

	printf("%lf", c);
	return 0;
}
