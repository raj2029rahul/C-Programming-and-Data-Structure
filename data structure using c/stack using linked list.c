#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*top=NULL;

void push(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL)
        newnode->next = NULL;
    else
        newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
        printf("underflow\n");
    else
    {
        struct node *temp=top;
        printf("%d",temp->data);
        top=temp->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    if(top==NULL)
        printf("underflow\n");
    else
    {
        temp=top;
        while(temp->next!=NULL)
        {
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL",temp->data);
    }
}
main()
{
    int value,ch;
    while(1)
    {
        printf("enter choice\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter value to push\n");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default:
                printf("wrong choice\n");
        }
    }
}
