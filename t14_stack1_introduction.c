#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int empty(struct stack ptr)
{
    if(ptr.top<0)
    {
        return 1;
    }
    return 0;
}
int full(struct stack ptr)
{
    if(ptr.size-1==ptr.top)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct stack p;
    p.size=1;
    p.top=-1;
    p.arr=(int *)malloc(p.size * sizeof(int));
    if(empty(p))
    {
        printf("stack is empty\n");
    }
    else printf("struct is not empty\n");
        printf("%d %d %d\n",p.size,p.top,p.arr[0]);
    p.arr[0]=14;
    p.top++;
    if(full(p))   printf("stack is full\n");
    else          printf("stack is not full");
    printf("%d %d %d\n",p.size,p.top,p.arr[0]);
    return 0;
}