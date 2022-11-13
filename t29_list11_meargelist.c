#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linktra(struct Node *ptr)
{
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }    while (ptr!=NULL);

    printf("\n");
}
/*struct Node* merge(struct Node* &list1,struct Node* &list2)
{
    printf("Hello\n");
    struct Node* p1=list1;
    struct Node* p2=list2; 
    struct Node* list3=NULL;
    struct Node* p3=list3;
        linktra(list3);        
    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    linktra(list3->next);
    return list3->next;
}*/
struct Node* mergerec(struct Node* list1,struct Node* list2)
{
    if(list1==NULL)
    {
        return list2;
    }
    if(list2==NULL) 
    {return list1;}
    struct Node* result;
    if(list1->data<list2->data)
    {
        result=list1;
        result->next=mergerec(list1->next,list2);
    }
    else
    {
        result=list2;
        result->next=mergerec(list1,list2->next);
    }
    return result;
}
int main()
{
    struct Node *list1;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    list1=(struct Node *) malloc(sizeof(struct Node));
    first=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    list1->data=2;
    list1->next=first;
    first->data=13;
    first->next=second;
    second->data=34;
    second->next=third;
    third->data=67;
    third->next=NULL;
    printf("List 1\n");
    linktra(list1);
    struct Node *list2;
    struct Node *first2;
    struct Node *second2;
    struct Node *third2;
    list2=(struct Node *) malloc(sizeof(struct Node));
    first2=(struct Node *) malloc(sizeof(struct Node));
    second2=(struct Node *) malloc(sizeof(struct Node));
    third2=(struct Node *) malloc(sizeof(struct Node));
    list2->data=1;
    list2->next=first2;
    first2->data=3;
    first2->next=second2;
    second2->data=10;
    second2->next=third2;
    third2->data=15;
    third2->next=NULL;
    printf("list 2\n");
    linktra(list2);    
    struct Node* list3=mergerec(list1,list2);
    printf("list 3\n");
    linktra(list3);        
    return 0;
}