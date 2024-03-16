#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stacks * MyStack;

    MyStack = Create_Stack(22);
    pop(23,MyStack);
    pop(24,MyStack);
    pop(25,MyStack);

    PrintStack(MyStack);
    return 0;
}
