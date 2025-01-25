#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
	int arr[9][9] = { 0, };
	int max = 0;
	int row = 0;
	int column = 0;
	
	for (int cnt_i = 0; cnt_i < 9; cnt_i++)
	{
		for (int cnt_j = 0; cnt_j < 9; cnt_j++)
		{
			scanf("%d", &arr[cnt_i][cnt_j]);
			if (max < arr[cnt_i][cnt_j])
			{
				max = arr[cnt_i][cnt_j];
				row = cnt_i;
				column = cnt_j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", row + 1, column + 1);

	return 0;
}
