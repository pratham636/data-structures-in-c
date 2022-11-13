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
    if((q->r+1)%q->size==q->f)
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
        p->r=(p->r+1)%p->size;
        p->arr[p->r]=val;
        printf("Enqued element: %d\n",val);
    }
}
int dequeue(struct queue *q)
{
    int a=0;
    if(Empty(q))
    {
        printf("This Queue is empty.\n");
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
struct queue p;
p.f=p.r=0;
p.size=3;
p.arr=(int *)malloc(p.size*sizeof(int));
enqueue(&p,67);
enqueue(&p,39);
//enqueue(&p,16);
//enqueue(&p,7);
//enqueue(&p,9);
//enqueue(&p,6);
printf("Dequeue element %d\n.",dequeue(&p));
printf("Dequeue element %d\n.",dequeue(&p));
printf("Dequeue element %d\n.",dequeue(&p));
//printf("Dequeue element %d\n.",dequeue(&p));
//printf("Dequeue element %d\n.",dequeue(&p));
if(full(&p)){
    printf("Queue is full\n");
    }
    if(Empty(&p))
    {
        printf("Queue is empty\n");
    }
    return 0;
}