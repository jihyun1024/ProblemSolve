#define _CRT_SECURE_NO_WARNINGS
#define RANGE 8001 // 범위가 -4000 ~ 4000이므로 
#define MAX_NUM 500000

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // round 함수 사용을 위한 헤더 파일

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	// 원소 개수 입력
	int num = 0;
	scanf("%d", &num);
		
	// 500000개의 원소를 할당하기 위한 동적 배열 할당
	int* numbers = (int*)calloc(MAX_NUM, sizeof(int));
	int frequency[RANGE] = { 0 };
	int sum = 0;

	for (int cnt_i = 0; cnt_i < num; cnt_i++)
	{
		scanf("%d", &numbers[cnt_i]);
		sum += numbers[cnt_i];
		frequency[numbers[cnt_i] + 4000]++;
	}

	// 산술평균 (round 함수 사용)
	int rounded_mean = (int)round((double)sum / num); printf("%d\n", rounded_mean);

	// 중앙값
	qsort(numbers, num, sizeof(int), compare);
	printf("%d\n", numbers[num / 2]);

	// 최빈값
	int max_freq = 0;
	int mode_count = 0;
	int mode = 4001;

	for (int cnt_i = 0; cnt_i < RANGE; cnt_i++)
	{
		if (frequency[cnt_i] > max_freq)
		{
			max_freq = frequency[cnt_i];
			mode = cnt_i - 4000;
			mode_count = 1;
		}
		else if (frequency[cnt_i] == max_freq)
		{
			if (mode_count == 1)
			{
				mode = cnt_i - 4000;
				mode_count++;
			}
		}
	}
	printf("%d\n", mode);

	// 범위 (정렬한 후 출력)
	qsort(numbers, num, sizeof(int), compare);
	printf("%d\n", numbers[num - 1] - numbers[0]);

	free(numbers);

	return 0;
}
