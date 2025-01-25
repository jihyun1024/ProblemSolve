#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    int realStudent[30] = {0,}; //등록되어 있는 학생
    int fakeStudent[30] = {0,}; //과제를 낸 학생
    
    for (int cnt_i = 0; cnt_i < 30; cnt_i++)
    {
        realStudent[cnt_i] = cnt_i + 1;
    } //실제 학생의 출석번호를 등록
    
    for (int cnt_i = 0; cnt_i < 28; cnt_i++)
    {
        scanf("%d\n", &n);
        fakeStudent[n - 1] = n;
    }
    
    for (int cnt_i = 0; cnt_i < 30; cnt_i++)
    {
        if (realStudent[cnt_i] == fakeStudent[cnt_i])
        {
            continue;
        }
        else
        {
            printf("%d\n", realStudent[cnt_i]);
        }
    }
    
    return 0;
}
