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

void inset(struct node* root,int key)
{
struct node* prev=NULL;
while(root!=NULL)
{
    prev=root;
    if(key==root->data)
    {
        printf("Can not insert %d, already is BST",key);
        return;
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
    struct node* new=createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    {
        prev->right=new;
    }
}


struct node *inorderpredecessor(struct node *root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}


struct node *deleatnode(struct node *root,int value)
{
    struct node *ipre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        free(root);
        return NULL;
    }
    if(value<root->data)
    {
        root->left=deleatnode(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=deleatnode(root->right,value);
    }
    else
    {
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        root->left=deleatnode(root->left,ipre->data);
    }
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
    inset(p,5);
    printf("\n");
    inorder(p);
    printf("\n");
    deleatnode(p,2);
    printf("\n");
    inorder(p);
    return 0;
}