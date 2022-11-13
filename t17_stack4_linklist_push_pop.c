#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
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
struct Node * pop(struct Node * top)
{
    struct Node * n=top;
    if(top==NULL)
    {
        printf("stack is emply\n");
    }
    else
    {
        top=top->next;
        int x=n->data;
        free(n);
        return top;
    }
}
int main()
{
struct Node * top =NULL;
top=push(top,23);
top=push(top,34);
top=push(top,56);
linklisttra(top);
printf("\n\n");
top=pop(top);
linklisttra(top);
    return 0; 
}
