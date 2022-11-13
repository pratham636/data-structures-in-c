#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node* top = NULL;

struct Node * push(struct Node * top,int data)
{
    struct Node * n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        n->data=data;
        n->next=top;
        top=n;
        return top;    
    }
}
void linklisttra(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int peek(int pos)
{
struct Node* ptr = top;
for(int i=0;(i<pos-1 && ptr!=NULL);i++)
{
    ptr=ptr->next;
}
if(ptr!=NULL)
{
    return ptr->data;
}
return -1;
}
int main()
{
//struct Node * top =NULL;  we use stement after the struct for not ust struct Node * top in each stement 
top=push(top,23);
top=push(top,34);
top=push(top,56);
linklisttra(top);
printf("\n\n");
//printf("%d",peek(2));
//top=pop(top);
//linklisttra(top);
for(int i=1;i<4;i++)
{
    printf("%d th num. = %d\n",i,peek(i));
}
    return 0; 
}
