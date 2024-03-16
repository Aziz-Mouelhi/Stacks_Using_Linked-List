#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct data{
    int data;
    struct data *next;
}data;

typedef struct Sataks{
data *head;
int Size;
}Stacks;

void pop(int value,Stacks *pointer){


    data *dataVar = malloc(sizeof(data));
    dataVar->data = value;
    dataVar->next =NULL;

    if(pointer->Size>0){
        data * sub;

    sub = pointer->head;
    pointer->head = dataVar ;
    dataVar->next = sub ;
    }else{
        pointer->head = dataVar;
    }
            pointer->Size++;
}

Stacks *Create_Stack(int value){

    Stacks *stacksVar = malloc(sizeof(Stacks));
    stacksVar->Size = 0;
    data *dataVar = malloc(sizeof(data));

    dataVar->data = value;
    dataVar->next = NULL;

    stacksVar->head =dataVar;
    stacksVar->Size++;

return stacksVar;

}

void PrintStack(Stacks *pointer){
        if(pointer->Size <1){
            printf("Stack Is Empty \n");
        }else{
            data *printvar;
            printvar = pointer->head;
        while(printvar != NULL){
                printf(" element :%d >>>>\n",printvar->data);
                printvar = printvar->next;
        }
        }
}

#endif // STACK_H_INCLUDED
