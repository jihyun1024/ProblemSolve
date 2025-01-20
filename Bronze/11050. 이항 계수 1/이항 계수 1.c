#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		int result = 1;
		for (int cnt_i = 1; cnt_i <= num; cnt_i++)
		{
			result *= cnt_i;
		}
		return result;
	}
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d %d", &num1, &num2);

	int n1 = 0; int n2 = 0; int n3 = 0;
	n1 = factorial(num1);
	n2 = factorial(num2);
	n3 = factorial(num1 - num2);

	printf("%d", n1 / (n2 * n3));
    
    return 0;
}
