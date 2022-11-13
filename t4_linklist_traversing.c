#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int linktra(struct Node *ptr)
{
    int c=0;
    while (ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    printf("%d\n",c);
return c;
}
struct Node *print_index(struct Node* head,int index)
{
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node ));
    ptr = head;
    int i=0;
    index=(index+1)/2;
    while (i!=index-1)
    {
        ptr=ptr->next;
        i++;
    } 
    printf("the Middle index is %d data is %d",index,ptr->data); 
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
    int index=linktra(head);
    //printf("%d",index);
    print_index(head,index);
}
















