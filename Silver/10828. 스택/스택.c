#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct stack
{
	int* pData;
	int size;
	int top;
 
}stack;
 
void InitStack(stack* stk, int stack_size)
{
	stk->pData = (int*)malloc( stack_size * sizeof(int));
	stk->size = 0;
	stk->top = -1;
}
void push(stack* stk, int x)
{
 
	stk->top++;
	stk->pData[stk->top] = x;
	stk->size++;
 
}
int pop(stack* stk)
{
	int rtn;
	if(stk->top == -1) return stk->top;
 
	rtn = stk->pData[stk->top];
	stk->top--;
	stk->size--;
	return rtn;
 
}
 
int main()
{
    int ia;
    int N;
    char str[6];
    int temp;
 
    stack stk;
 
    InitStack(&stk, 10000);
 
    scanf("%d",&N);
    for(ia=0; ia<N; ia++)
    {
        scanf("%s", str);
        //printf("%s",str);
		  if(strcmp(str, "push")==0)
		  {
		  	scanf("%d", &temp);
			  push(&stk, temp);
		  }
		  else if(strcmp(str, "pop")==0)
	  	{
	  		printf("%d\n" , pop(&stk));
	  	}
	  	else if(strcmp(str, "size")==0)
	  	{
	  		printf("%d\n", stk.size);
	  	}
	  	else if(strcmp(str, "empty")==0)
	  	{
		  	if(stk.top == -1) printf("1\n");
		  	else printf("0\n");
	  	}
	  	else if(strcmp(str, "top")==0)
		  {
			  if(stk.top != -1)
			  printf("%d\n" , stk.pData[stk.top]);
			  else printf("%d\n" , stk.top);
	  	}
    }
     free(stk.pData);
    return 0;
 
}
