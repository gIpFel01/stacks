#include <stdio.h>
#include <stdbool.h>
#define length 5

typedef struct
{
    int top;
    int array[length];
}STACK;

STACK stack={-1};

bool StackFull(STACK *stack)
{
    if(stack->top==length)
        return true;
    return false;
}

bool StackEmpty(STACK *stack)
{
    if(stack->top==-1)
        return true;
    return false;
}

void Push(STACK *stack,int x)
{   
    if(!StackFull(stack))
    {
        stack->top++;
        stack->array[stack->top]=x;
    }
    else
        printf("OPERATION FAILED, CAUSE: STACK OVERFLOWS\n");
}

int Pop(STACK *stack)
{   
    if(StackEmpty(stack))
        return -1;

    stack->top = stack->top-1;
    return stack->array[stack->top+1];
}
