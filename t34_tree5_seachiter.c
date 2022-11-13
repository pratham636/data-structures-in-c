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

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct node * searchIter(struct node* root, int key)
{
    while(root!=NULL)
    {
        if(key==root->data)
        {
            return root;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return NULL;
}

int main()
{
    struct node *p=createnode(71);
    struct node *p1=createnode(2);
    struct node *p2=createnode(95);
    struct node *p3=createnode(1);
    struct node *p4=createnode(30);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;


    printf("\ninorder traversal : ");
    inorder(p);
    struct node* n=searchIter(p,30);
    if(n!=NULL)
    {
        printf("\nFound: %d",n->data);
    }
    else
    {
        printf("\nElement not found");
    }
    return 0;
}