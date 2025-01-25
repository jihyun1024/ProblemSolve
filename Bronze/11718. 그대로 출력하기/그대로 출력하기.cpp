#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char arr[100];

    while (scanf("%[^\n]", arr) != EOF)
    {
        getchar();
        printf("%s\n", arr);
    }
    return 0;

}
