#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0;
	int M = 0;
	int K = 0;
	int** matA = NULL;
	int** matB = NULL;
	int** mul = NULL;

	// 첫 번째 배열 입력
	scanf("%d %d", &N, &M);
	matA = (int**)calloc(N, sizeof(int*));
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		matA[cnt_i] = (int*)calloc(M, sizeof(int));
	}
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		for (int cnt_j = 0; cnt_j < M; cnt_j++)
		{
			scanf_s("%d", &matA[cnt_i][cnt_j]);
		}
	}

	// 두 번째 배열 입력
	scanf_s("%d %d", &M, &K);
	matB = (int**)calloc(M, sizeof(int*));
	for (int cnt_i = 0; cnt_i < M; cnt_i++)
	{
		matB[cnt_i] = (int*)calloc(K, sizeof(int));
	}
	for (int cnt_i = 0; cnt_i < M; cnt_i++)
	{
		for (int cnt_j = 0; cnt_j < K; cnt_j++)
		{
			scanf_s("%d", &matB[cnt_i][cnt_j]);
		}
	}
	
	// 결과 저장할 배열 동적할당
	mul = (int**)calloc(N, sizeof(int*));
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		mul[cnt_i] = (int*)calloc(K, sizeof(int));
	}

	// 배열 곱셈
	for (int cnt_i = 0; cnt_i < N; cnt_i++) 
	{
		for (int cnt_j = 0; cnt_j < K; cnt_j++) 
		{
			for (int cnt_k = 0; cnt_k < M; cnt_k++)
			{
				mul[cnt_i][cnt_j] += (matA[cnt_i][cnt_k] * matB[cnt_k][cnt_j]);
			}
		}
	}

	// 배열 출력
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		for (int cnt_j = 0; cnt_j < K; cnt_j++)
		{
			printf("%d ", mul[cnt_i][cnt_j]);
		}
		printf("\n");
	}

	// 2차원 배열 해제
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		free(matA[cnt_i]);
	}
	free(matA);
	for (int cnt_i = 0; cnt_i < M; cnt_i++)
	{
		free(matB[cnt_i]);
	}
	free(matB);
	for (int cnt_i = 0; cnt_i < N; cnt_i++)
	{
		free(mul[cnt_i]);
	}
	free(mul);

	return 0;
}
