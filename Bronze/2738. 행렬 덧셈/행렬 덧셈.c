#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0; //row
	int M = 0; //column

	int mat1[101][101] = { 0, };
	int mat2[101][101] = { 0, };
	int cnt_i, cnt_j;

	scanf("%d %d", &N, &M);
	for (cnt_i = 0; cnt_i < N; cnt_i++)
	{
		for (cnt_j = 0; cnt_j < M; cnt_j++)
		{
			scanf("%d ", &mat1[cnt_i][cnt_j]);
		}
	}

	for (cnt_i = 0; cnt_i < N; cnt_i++)
	{
		for (cnt_j = 0; cnt_j < M; cnt_j++)
		{
			scanf("%d ", &mat2[cnt_i][cnt_j]);
		}
	}

	for (cnt_i = 0; cnt_i < N; cnt_i++)
	{
		for (cnt_j = 0; cnt_j < M; cnt_j++)
		{
			printf("%d ", mat1[cnt_i][cnt_j] + mat2[cnt_i][cnt_j]);
		}
		printf("\n");
	}

	return 0;
}
