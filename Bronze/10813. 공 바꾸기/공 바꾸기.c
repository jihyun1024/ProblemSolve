#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j = 0;
    int N, M = 0;
    int temp; //바꿀 값을 저장할 임시 변수
    int arr[100];
    
    scanf("%d %d", &N, &M);
    
    for (int cnt_i = 0; cnt_i < N; cnt_i++)
    {    
        arr[cnt_i] = cnt_i + 1;
    }
    
    for (int cnt_j = 0; cnt_j < M; cnt_j++)
    {
        scanf("%d %d", &i, &j);
        temp = arr[j - 1];
        arr[j - 1] = arr[i - 1]; //index는 1을 빼기 때문에
        arr[i - 1] = temp;
    }
    
    for (int cnt_k = 0; cnt_k < N; cnt_k++)
    {
        printf("%d ", arr[cnt_k]);
    }
    
    return 0;
}
