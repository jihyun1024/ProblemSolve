#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, x, cnt_i;
    x = 42;
    int arr[43];
    for (cnt_i = 0; cnt_i <= 42; cnt_i++)
    {
        arr[cnt_i] = -1;
    }
    for (cnt_i = 1; cnt_i <= 10; cnt_i++)
    {
        scanf("%d", &a);
        arr[a % 42] = a % 42;
    }
    for (cnt_i = 0; cnt_i <= 41; cnt_i++)
    {
        if (arr[cnt_i] == -1)
            x = x - 1;
    }
    printf("%d", x);

    return 0;
}
