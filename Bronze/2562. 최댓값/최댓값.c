#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt_i;
	int num = 0;
	int arr[9] = { 0, };

	int max = arr[0];

	for (cnt_i = 0; cnt_i < 9; cnt_i++)
	{
		scanf("%d\n", &arr[cnt_i]);
	}

	for (cnt_i = 0; cnt_i < 9; cnt_i++)
	{
		if (max < arr[cnt_i])
		{
			max = arr[cnt_i];
		}
	}

	printf("%d\n", max);
	for (cnt_i = 0; cnt_i < 9; cnt_i++)
	{
		if (max != arr[cnt_i])
		{
			continue;
		}
		else
		{
			printf("%d\n", cnt_i + 1);
			break;
		}
		break;
	}
	return 0;
}
