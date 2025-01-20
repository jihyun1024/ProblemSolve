#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	int V = 0;

	scanf("%d %d %d", &A, &B, &V);

	if ((V - B) % (A - B) != 0)
	{
		printf("%d", ((V - B) / (A - B) + 1));
	}
	else
	{
		printf("%d", ((V - B) / (A - B)));
	}
	return 0;
}
