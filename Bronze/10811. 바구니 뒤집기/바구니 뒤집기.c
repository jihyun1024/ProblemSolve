#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N = 0;
    int M = 0;
    int i = 0;
    int j = 0;
    int temp;
    
    int arr[100] = {0,};
    
    scanf("%d %d\n", &N, &M);
    for (int cnt_l = 0; cnt_l < N; cnt_l++)
    {
        arr[cnt_l] = cnt_l + 1;
    }
    
    for (int cnt_i = 0; cnt_i < M; cnt_i++)
    {
        scanf("%d %d\n", &i, &j);
        for (int cnt_j = i - 1; cnt_j < j; cnt_j++)
        {
            temp = arr[cnt_j];
            arr[cnt_j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    
    for (int cnt_k = 0; cnt_k < N; cnt_k++)
    {
        printf("%d ", arr[cnt_k]);
    }
    
    return 0;
}
