#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char input1[4];
    char input2[4];
    int a1, a3, b1, b3;

    scanf("%s %s", input1, input2);

    a1 = input1[0];
    a3 = input1[2];

    b1 = input2[0];
    b3 = input2[2];

    input1[0] = a3;
    input1[2] = a1;

    input2[0] = b3;
    input2[2] = b1;

    if (strcmp(input1, input2) > 0)
    {
        printf("%s", input1);
    }
    else
    {
        printf("%s", input2);
    }

    return 0;
}
