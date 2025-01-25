#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quarter = 0; //$0.25
    int dime = 0; //$0.10
    int nickel = 0; //$0.05
    int penny = 0; //$0.01

    //거스름돈은 항상 $5 이하, 손님이 받는 동전의 개수는 최소화
    //예를 들어, $1.24 -> 4쿼터, 2다임, 0니켈, 4페니

    int T = 0; //테스트 케이스의 개수
    int c = 0; //거스름돈을 나타내는 정수, 단위는 센트 (1달러 = 100센트, 1 <= c <= 500)

    scanf("%d", &T);
    for (int cnt_i = 0; cnt_i < T; cnt_i++)
    {
        scanf("%d", &c);

        quarter = c / 25;
        dime = (c - (quarter * 25)) / 10;
        nickel = (c - (quarter * 25) - (dime * 10)) / 5;
        penny = (c - (quarter * 25) - (dime * 10) - (nickel * 5)) / 1;

        printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }
}
