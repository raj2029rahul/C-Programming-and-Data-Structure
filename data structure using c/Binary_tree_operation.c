
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left,*right;
};
struct node *create(){
    int value;
    struct node *newnode;
    printf("Enter node data:");
    scanf("%d",&value);
    if(value==-1){
        return NULL;
    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        printf("enter left child of %d:\n",value);
        newnode->left=create();
        printf("enter right child of %d:\n",value);
        newnode->right=create();
    }
    return newnode;
}

struct node *inorder(struct node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d",p->data);
        inorder(p->right);
    }
}

int main()
{
    struct node *root;
    root=create();
    inorder(root);
    return 0;
}
