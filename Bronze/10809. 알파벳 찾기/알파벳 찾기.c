#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char s[100] = { 0, }; //단어 s, 소문자로만 이루어짐
	int arr[26] = { 0, }; //영어 알파벳 배열
	int len = strlen(s);
	int print[26] = { 0, }; //출력할 결과물

	scanf("%s", s);

	for (int cnt_m = 0; cnt_m < 26; cnt_m++)
	{
		arr[cnt_m] = cnt_m + 97; //아스키코드를 이용한 영어 알파벳 배열 지정
	}

	for (int cnt_n = 0; cnt_n < 26; cnt_n++)
	{
		print[cnt_n] = -1; //미리 다 -1로 지정
	}

	for (int cnt_i = 0; cnt_i < 26; cnt_i++)
	{
		for (int cnt_j = 0; cnt_j < 100; cnt_j++)
		{
			if (arr[cnt_i] == s[cnt_j])
			{
				print[cnt_i] = cnt_j;
                break;
			}
		}
	}

	for (int cnt_l = 0; cnt_l < 26; cnt_l++)
	{
		printf("%d ", print[cnt_l]);
	}
}
