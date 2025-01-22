#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int l = 0;
	char str[51]; // 문자열 입출력으로 문자 하나하나 입출력을 대신
	long long num; // ascii 코드표 참고 (a = 97)
	long long result = 0;

	scanf("%d", &l);
	scanf("%s", str);

	for (int cnt_i = 0; cnt_i < l; cnt_i++)
	{
		num = str[cnt_i] - 'a' + 1;

		// 31의 지수승과 modulo 변환을 동시에
		for (int cnt_j = 0; cnt_j < cnt_i; cnt_j++)
		{
			num = (num * 31) % 1234567891;
		}

		result += (num % 1234567891);
	}

	// 1 <= L <= 50의 경우, 나머지가 쌓이면서 mod보다 더 커질 수 있기 때문에
	// 마지막 결과물에도 mod 연산 진행
	printf("%lld", result % 1234567891);
	return 0;
}
