#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stacks * MyStack;
    data *delvar;
printf("<<<<<<<< STACK ELEMENTS >>>>>>>>\n\n\n");
    MyStack = Create_Stack(22);
    Push(23,MyStack);
    Push(24,MyStack);
    Push(25,MyStack);
    printf("Stack Size is :%d\n",MyStack->Size);

    PrintStack(MyStack);
    printf("///////////////////////////\n\n");
// testing deleting//
int i ;
for(i=0; i < 5 ; i++){
    delvar=Pop(MyStack);
    printf("Stack Size is :%d \n\n",MyStack->Size);
    printf("element %d has been deleleted \n",delvar->data);
    PrintStack(MyStack);

}
printf("element %d has been deleleted \n",delvar->data);

    return 0;
}
