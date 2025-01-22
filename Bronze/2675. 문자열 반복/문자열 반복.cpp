#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T = 0;
    int R = 0;
    char S[20] = {0,};
    
    scanf("%d", &T);
    
    for (int cnt_i = 0; cnt_i < T; cnt_i++)
    {
        scanf("%d %s", &R, S);
        for (int cnt_j = 0; cnt_j < strlen(S); cnt_j++)
        {
            for (int cnt_k = 0; cnt_k < R; cnt_k++)
            {
                printf("%c", S[cnt_j]);
            }
        }
        printf("\n");
    }
}
