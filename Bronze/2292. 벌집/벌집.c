#include <stdio.h>

int main()
{
	//최소 개수의 방이 늘어나는 방의 번호의 수열
	//2, 8, 20, 38, 62, .... (각각 2, 3, 4, 5, 6)
	//8부터 시작하여 6, 12, 18, 24, 30,...의 규칙으로 방의 고유 번호가 증가

	int N = 0;
	scanf_s("%d", &N);

	int roomNum = 2;
	int increase = 5; 

	int count = 2;

	if (N == 1)
	{
		printf("1");
		return 0;
	}

	while (1)
	{

		if ((roomNum <= N) && (roomNum + increase) >= N)
		{
			printf("%d", count);
			break;
		}
		else
		{
			roomNum = roomNum + increase + 1;
			increase += 6;
			count++;
		}
	}

	return 0;
}
