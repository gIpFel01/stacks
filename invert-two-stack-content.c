#include <stdlib.h>
#include "STACK_LIB.h"

/*
    METHOD:
    let firstStack, secondStack, tempFirstStack, and tempSecondStack be our stacks. 
    tempFirstStack and tempSecondStack serves as a temporary storage.
    We empty firstStack while simultaneously transferring its values to tempFirstStack, and .
    Once firstStack is empty, we transfer the values from secondStack to firstStack.
    we do the same for tempSecondStack.
    Lastly, we transfer the values from tempFirstStack, and  to secondStack.
*/

void invert(STACK *firstStack, STACK *secondStack) {
    STACK tempFirstStack={-1};
    STACK tempSecondStack={-1};
    while (!StackEmpty(firstStack)){
        Push(&tempFirstStack, Pop(firstStack));
    }
    while (!StackEmpty(secondStack)){
        Push(&tempSecondStack, Pop(secondStack));
    }
    while (!StackEmpty(&tempSecondStack)){
        Push(firstStack, Pop(&tempSecondStack));
    }
    while (!StackEmpty(&tempFirstStack)){
        Push(secondStack, Pop(&tempFirstStack));
    }
}

int main(){
    STACK firstStack={-1};
    STACK secondStack={-1};
    Push(&firstStack, 4);
    Push(&firstStack, 19);
    Push(&secondStack, 85);
    Push(&secondStack, 37);
    Push(&secondStack, 89);
    invert(&firstStack, &secondStack);
    printf("------------Value After Inverting-------------------\n");
    printf("last element of firstStack is:%d\n", Pop(&firstStack));
    printf("last element of secondStack is:%d\n", Pop(&secondStack));
    return 0;
}