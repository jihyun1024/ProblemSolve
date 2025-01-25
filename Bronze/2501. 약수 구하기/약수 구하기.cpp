#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main()
{
	int N = 0;
	int k = 0;
	int cnt = 0;

	scanf("%d %d", &N, &k);
	int* arr = (int*)calloc(N, sizeof(int));

	for (int cnt_i = 1; cnt_i <= N; cnt_i++)
	{
		if (N % cnt_i == 0)
		{
			arr[cnt_i - 1] = 1;
		}
		else
		{
			arr[cnt_i - 1] = 0;
		}
	}

	for (int cnt_j = 0; cnt_j < N; cnt_j++)
	{
		if (arr[cnt_j] == 1)
		{
			cnt++;
		}
		
		if (cnt == k)
		{
			printf("%d", cnt_j + 1);
			break;
		}
	}
	
	if (cnt < k)
	{
		printf("0");
	}

	free(arr);
	return 0;
}
