#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int t = 0;
	double x1, x2, y1, y2 = 0;	
	double r1, r2 = 0; 
	double distance = 0; 

	scanf("%d", &t);

	for (int cnt_i = 0; cnt_i < t; cnt_i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		
		if ((x1 == x2) && (y1 == y2) && (r1 == r2))
		{
			printf("-1\n");
		}
		else if (distance > (r1 + r2))
		{
			printf("0\n");
		}
		else if (pow((r1 + r2), 2) == pow((x1 - x2), 2) + pow((y1 - y2), 2))
		{
			printf("1\n");
		}
		else if ((fabs(r1 - r2) < distance) && ((r1 + r2) > distance))
		{
			printf("2\n");
		}
		else if (pow((r1 - r2), 2) == pow((x1 - x2), 2) + pow((y1 - y2), 2))
		{
			printf("1\n");
		}
		else if (distance < fabs(r1 - r2))
		{
			printf("0\n");
		}
	}

	return 0;
}
