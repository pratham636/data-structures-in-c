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
int peek(struct stack *ptr,int i)
{
    int val=ptr->top-i+1;
    if(val<0)
    {
        printf("Not possible in stack\n");
    }
    else
    {
        return ptr->arr[val];
    }
}
int main()
{
    struct stack *p=(struct stack *)malloc(sizeof(struct stack));
    p->size=10;
    p->top=-1;
    p->arr=(int *)malloc(sizeof(int));
    pushval(p,67);
    pushval(p,8);
    pushval(p,17);
    pushval(p,2);
    pushval(p,343);
    pushval(p,45);
    pushval(p,0);
    pushval(p,90);
    pushval(p,6);
    pushval(p,7);
    pushval(p,67); //write overflow
    printf("The pop value is %d\n",pop(p));
    for(int i=0;i<p->size;i++){
    printf("%d th value is : %d\n",i,peek(p,i)); 
    }
    return 0;
}