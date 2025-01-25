#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int N = 0;
	scanf("%d", &N);

	int res = pow(2, N) + 1;
	int real = pow(res, 2);
	printf("%d", real);

	return 0;
}
