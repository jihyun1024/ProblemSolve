#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void testArray(char* string)
{
	int len = strlen(string);
	int cnt_i;

	for (cnt_i = 0; cnt_i < len / 2; cnt_i++)
	{
		if (string[cnt_i] == string[len - cnt_i - 1])
		{
			continue;
		}
		else
		{
			printf("0");
			return; //break;를 쓰면 '동일한 문자열입니다!' 문자열도 같이 표시됨
		}
	}
	printf("1");
}

void test4()
{
	char string[101] = { 0, };
	char* ptr = string; //배열의 시작 주소를 포인터에 집어넣은 것

	scanf("%s", string);
	//이거 대신에 fgets(string, sizeof(string), stdin);도 가능 
	//-> 이 경우 맨 마지막에 개행문자가 있어 그걸 없애주는 과정이 필요함.

	testArray(ptr);
}

int main()
{
	test4();
	return 0;
}
