#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
}
int getheigh()
{
    if(n==NULL)
    {
        return 0;
    }
    return n->heigh;
}
struct node *createnode(int key)
{
    struct node *node=(struct node *)malloct(sizeof(struct node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->heigh=1;
    return node;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
int getbalancefactor()
{
    if(n==NULL)
    {
        return 0;
    }
    return getheigh(n->left)-getheigh(n->right);
}
static node *rightrotate(struct node *y)
{
    struct node *x=y->left;
    struct node *t2=x->right;

    x->right=y;
    y->left=t2;

    x->height=max(getheigh(x->right),getheigh(x->left)+1);
    y->height=max(getheigh(y->right),getheigh(y->left)+1);
    return x;
}
static node *leftrotate(struct node *y)
{
    struct node *y=x->right;
    struct node *t2=y->left;
    
    y->left=x;
    x->right=t2;

    x->height=max(getheigh(x->right),getheigh(x->left)+1);
    y->height=max(getheigh(y->right),getheigh(y->left)+1);
    return y;
}
struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    {
        return createnode(key);
    }
    if(key<node->key)
    {
        
    }
}
int main()
{

    return 0;
}