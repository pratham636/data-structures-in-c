#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data)
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    struct node *p=createnode(7);
    struct node *p1=createnode(1);
    struct node *p2=createnode(65);
    struct node *p3=createnode(4);
    struct node *p4=createnode(100);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    return 0;
}