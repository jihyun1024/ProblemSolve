#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char mat[5][16] = { 0, };

    for (int cnt_i = 0; cnt_i < 5; cnt_i++)
    {
        scanf("%s", mat[cnt_i]);
    }

    for (int cnt_j = 0; cnt_j < 16; cnt_j++)
    {
        for (int cnt_k = 0; cnt_k < 5; cnt_k++)
        {
            if (mat[cnt_k][cnt_j] == 0x00)
            {
                continue;
            }
            printf("%c", mat[cnt_k][cnt_j]);
        }
    }

    return 0;
}
