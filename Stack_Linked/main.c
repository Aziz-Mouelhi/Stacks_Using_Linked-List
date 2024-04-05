#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"



int main()
{
    Stacks * MyStack;
    Stacks * MyStack1;
    Stacks * MyStack2;
    data *delvar;
printf("<<<<<<<< STACK ELEMENTS >>>>>>>>\n\n\n");
    MyStack = Create_Stack(22);
    Push(23,MyStack);
    Push(2884,MyStack);
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

printf("test comparing stacks\n");
    MyStack1 = Create_Stack(22);
    Push(23,MyStack1);
    Push(266759675,MyStack1);
    Push(25,MyStack1);
    /////////////:
        MyStack2 = Create_Stack(22);
    Push(23,MyStack2);
    Push(27,MyStack2);
    Push(25,MyStack2);
    if(CompareStack(MyStack1,MyStack2)== 0 )
    {
        printf("two stacks are the same \n");
    }
    else
    {
        printf("two stacks are not the same \n");
    }

    return 0;
}
