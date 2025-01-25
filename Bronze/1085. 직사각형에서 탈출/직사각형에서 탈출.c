#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, w, h;
	int minx, miny, result;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x >= (double)w / 2)
		minx = w - x;
	else if (x < w / 2)
		minx = x;

	if (y >= (double)h / 2)
		miny = h - y;
	else if (y < h / 2)
		miny = y;

	if (minx >= miny)
		result = miny;
	else if (minx < miny)
		result = minx;

	printf("%d", result);

	return 0;
}
