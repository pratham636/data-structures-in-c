#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linktra(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node * insert(struct Node * head,int data)
{
    struct Node * ptr= (struct Node *)malloc (sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node * insert_beatt(struct Node *head,int data,int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while (p->next!=NULL)
    {
        p=p->next; 
    }
    p->next=ptr;
    ptr->next=NULL;
}
int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    head=(struct Node *) malloc(sizeof(struct Node));
    first=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    head->data=12;
    head->next=first;
    first->data=543;
    first->next=second;
    second->data=43;
    second->next=third;
    third->data=45;
    third->next=NULL;
    linktra(head);
    printf("\n\n");
    //insert at the beginng
    head=insert(head,9999);
    linktra(head);
    return 0;
}