#include<stdlib.h>
#include<stdio.h>
struct Node *f =NULL;
struct Node *r=NULL;

struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    printf("Print the element of linked list \n");
    while(ptr!=NULL)
    {
        printf("Element %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueqe(int value)
{
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data=value;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct Node *ptr=f;
    if(f==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{   
    traversal(f);
    printf("Dequeing element %d\n",dequeue());
    enqueqe(34);
    enqueqe(4);
    enqueqe(7);
    enqueqe(17);
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    printf("Dequeing element %d\n",dequeue());
    traversal(f);
    return 0;
}
