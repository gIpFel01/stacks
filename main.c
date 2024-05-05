#include <stdio.h>
#include "STACK_LIB.h"

int main()
{
    Push(&stack,12);
    Push(&stack,1);
    Push(&stack,13);
    printf("%d\n",Pop(&stack));
    printf("%d\n",Pop(&stack));
    printf("%d\n", Pop(&stack));
    return 0;
}