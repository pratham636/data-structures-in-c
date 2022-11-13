#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linktra(struct Node *head)
{
    struct Node *ptr=head;
    do{
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);
}
struct Node * insert_beging(struct Node * head,int data)
{
    struct Node *ptr=(struct Node *)malloc (sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    //ptr->next=head;
    //head=ptr;
    return ptr;
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
    third->next=head;
    linktra(head);
    printf("\n\n");
    head=insert_beging(head,83);
    linktra(head);
    return 0;
}