#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
struct node* minValueNode(struct node* node)
{
	struct node* current = node;
	while (current && current->left != NULL)
		current = current->left;

	return current;
}
struct node* deleteNode(struct node* root, int data)
{
	if (root == NULL)
		return root;
	if (data < root->data)
		root->left = deleteNode(root->left, data);
	else if (data > root->data)
		root->right = deleteNode(root->right, data);
	else {
		if (root->left == NULL) {
			struct node* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			struct node* temp = root->left;
			free(root);
			return temp;
		}
		struct node* temp = minValueNode(root->right);
	root->data = temp->data;
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}
struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node));    n->data = data; 
    n->left = NULL; 
    n->right = NULL;
    return n; 
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
printf("Hello\n");
}

int main(){
         struct node *p = createNode(54);
    struct node *p1 = createNode(13);
    struct node *p2 = createNode(68);
    p->left = p1;
    p->right = p2;
    /*insert(p,99);
    insert(p,1);
    insert(p,47);
    insert(p,13);
    insert(p,54);
    insert(p,33);
    insert(p,5);
    insert(p,68);
    insert(p,24);
    insert(p,86);
    insert(p,46);
    insert(p,56);*/
    struct node *p4 = createNode(5);
    p->left->left=p4;
    struct node *p13 = createNode(1);
    p->left->left->left=p13;
    struct node *p5 = createNode(24);
    p->left->right=p5;
    struct node *p6 = createNode(33);
    p->left->right=p6;
    struct node *p7 = createNode(24);
    p->left->right->left=p7;
    struct node *p8 = createNode(46);
    p6->right=p8;
    struct node *p9 = createNode(47);
    p8->right=p9;
    struct node *p10 = createNode(56);
    p2->left=p10;
    struct node *p11 = createNode(86);
    p2->right=p11;
    insert(p,20);
    insert(p,38);
    insert(p,44);
    insert(p,53);
    insert(p,62);
    deleteNode(p,24);
    deleteNode(p,54);
    deleteNode(p,1);
    deleteNode(p,47);
    inorder(p);
    return 0;
}
