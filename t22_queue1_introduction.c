#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int * arr;
};
int Empty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int full(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *p,int val)
{
    if(full(p))
    {
        printf("This Queue is full.\n");
    }
    else
    {
        p->r++;
        p->arr[p->r]=val;
        printf("Enqued element: %d.\n",val);
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(Empty(q))
    {
        printf("This Queue is empty.\n");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
struct queue p;
p.f=p.r=-1;
p.size=6;
p.arr=(int *)malloc(p.size*sizeof(int));
enqueue(&p,67);
enqueue(&p,39);
enqueue(&p,16);
printf("Dequeue element %d.\n",dequeue(&p));
printf("Dequeue element %d.\n",dequeue(&p));
printf("Dequeue element %d.\n",dequeue(&p));
enqueue(&p,7);
enqueue(&p,9);
enqueue(&p,6);
if(full(&p)){
    printf("Queue is full\n");
    }
    if(Empty(&p))
    {
        printf("Queue is empty\n");
    }
    return 0;
}