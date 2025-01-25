#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N = 0;
    int M = 0; 
    int i = 0;
    int j = 0;
    int k = 0;
    
    scanf("%d %d", &N, &M);
    int arr[100] = {0,};
    
    for (int cnt_i = 0; cnt_i < M; cnt_i++)
    {
        scanf("%d %d %d\n", &i, &j, &k);
        for (int cnt_j = i - 1; cnt_j < j; cnt_j++)
        {
            arr[cnt_j] = k;
        }
    }
    
    for (int cnt_k = 0; cnt_k < N; cnt_k++)
    {
        printf("%d ", arr[cnt_k]);
    }
    
    return 0;
}
