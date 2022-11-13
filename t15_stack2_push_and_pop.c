#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int *arr;
    int top;
};
void pushval(struct stack *ptr,int value)
{
    if(ptr->size-1<=ptr->top)
    {
        printf("overflow %d\n",value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *p=(struct stack *)malloc(sizeof(struct stack));
    p->size=10;
    p->top=-1;
    p->arr=(int *)malloc(sizeof(int));
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,67);
    pushval(p,7);
    pushval(p,67); //write overflow
    printf("%d",pop(p));
    
    return 0;
}