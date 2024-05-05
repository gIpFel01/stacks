#include <stdlib.h>
#include <math.h>
#include "STACK_LIB.h"

int middleIndexElement(int stackLenght) {
    int middleIndex = stackLenght / 2;
    if ((stackLenght % 2) != 0 )
        return middleIndex + 1;
    return middleIndex;
}

int middleElement(STACK *stack){
    int middleIndex = middleIndexElement(length);
    if (stack->top >= middleIndex-1){
        while (stack->top != middleIndex-1) {
            Pop(stack);
        }
        return Pop(stack);
    }
    return -1;
}

int main() {
    STACK stack={-1};
    Push(&stack, 17);
    Push(&stack, 13);
    Push(&stack, 29);
    Push(&stack, 18);
    printf("%d",middleElement(&stack));
    return 0;
}