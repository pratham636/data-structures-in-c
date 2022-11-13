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
struct Node * deleat_last(struct Node * head,int value)
{
    struct Node *p= head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
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
    //insert at end
    head=deleat_last(head,43);
    linktra(head);
    return 0;
}