#include<stdio.h>
#include<stdlib.h>

struct node{
   int info;
   struct node *next;
   };
struct node *create(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
void traverse(struct node *);

main()
{
    struct node *head=NULL;
    int ch;
    while(1)
    {
        printf("\n1.create\n2.traverse\n3.insert_beg\n4.insert_end\n0.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=create(head);
                    break;
            case 2: traverse(head);
                    break;
            case 3: head=insert_beg(head);
                    break;
            case 4: head=insert_end(head);
                    break;
            case 0: exit(0);
        }
    }
}
struct node *create(struct node *head)
{
    int i,n;
    struct node *newnode,*temp;
    printf("enter no of node\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter info\n");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if(head==NULL)
            head=newnode;
        else
            temp->next=newnode;
            temp=newnode;
    }
    return head;
};
void traverse(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);
        temp=temp->next;
    }
}
struct node *insert_beg(struct node *head)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter info\n");
    scanf("%d",&newnode->info);
    newnode->next=head;
    head=newnode;
    return head;
};
struct node *insert_end(struct node *head)
{
    struct node *newnode,*temp;
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter info\n");
    scanf("%d",&newnode->info);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
};

