#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_gcd(int num1, int num2)
{
	int temp = 0;

	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	//if num1 < num2, then switch num1 and num2

	int q = num1 / num2;
	int r = num1 % num2;

	if (r == 0)
	{
		return num2;
	}
	else
	{
		return find_gcd(num2, r);
	}
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);

	int gcd = 0;
	gcd = find_gcd(num1, num2);
	printf("%d\n", gcd);

	int lcm = (num1 * num2) / gcd;
	printf("%d\n", lcm);
	// by Theorem, gcd(a, b) * lcm(a, b) == ab

	return 0;
}
