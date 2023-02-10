#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};struct node *head=NULL;
struct node *insertAtend(struct node *head){
    int value;
    printf("enter data to insert:\n");
    scanf("%d",&value);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        newnode->data=value;
        head=newnode;
        newnode->next=NULL;
    }
    else{
        struct node *temp;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        newnode->data=value;
        temp->next=newnode;
        newnode->next=NULL;
    }
    return head;
}
struct node *insertAtbeg(struct node *head){
    int value;
    printf("enter data to insert:\n");
    scanf("%d",&value);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        newnode->data=value;
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->data=value;
        newnode->next=head;
        head=newnode;
    }
    return head;
}
struct node *insertAtpos(struct node *head){
    int value,pos,count=0,i=1;
    printf("enter data to insert:\n");
    scanf("%d",&value);
    printf("enter position to insert:\n");
    scanf("%d",&pos);
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    
    while(temp!=NULL){
    temp=temp->next;
    count++;
    }
    if(pos>count){
        printf("Invalid position..\n");
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        newnode->data=value;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
struct node *DeleteAtbeg(struct node *head){
    struct node *temp;
    temp=head;
    head=temp->next;
    temp->next=NULL;
    free(temp);
    printf("Begining node Deleted!!!\n");
    return head;
}
struct node *DeleteAtEnd(struct node *head){
    struct node *temp,*tempPrev;
    temp=head;
    tempPrev=head;
    while(temp->next!=NULL){
        tempPrev=temp;
        temp=temp->next;
    }
    tempPrev->next=NULL;
    free(temp);
    printf("Last node Deleted!!!\n");
    return head;
}
struct node *DeleteAfterPos(struct node *head){
    int pos,count=0,i=1;
    struct node *temp,*tempPrev;
    temp=head;
    tempPrev=head;
    printf("enter position after to delete:\n");
    scanf("%d",&pos);
    while(temp!=NULL){
    temp=temp->next;
    count++;
    }
    if(pos>count){
        printf("Invalid position..\n");
    }
    else{
        temp=head;
        while(i<pos+1){
            tempPrev=temp;
            temp=temp->next;
            i++;
        }
        tempPrev->next=temp->next;
        temp->next=NULL;
        free(temp);
         printf("Node Deleted at specified Position!!!\n");
    }
    return head;
}
struct node *ReverseSLL(struct node *head){
    struct node *prevnode,*currnode,*nextnode;
    prevnode=NULL;
    currnode=head;
    nextnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
    return head;
}
void traverseSLL(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch;
	while(1){
	    printf("0.Exit\n1.Insert at end\n2.Insert at beg\n3.Insert after position\n4.traverse singly linked list"
	    "\n5.DeleteAtbeg\n6.DeleteAtEnd\n7.DeleteAfterPos\n8.ReverseSLL\n");
	    scanf("%d",&ch);
	    switch(ch){
	        case 1:head=insertAtend(head);
	        break;
	        case 2:head=insertAtbeg(head);
	        break;
	        case 3:head=insertAtpos(head);
	        break;
	        case 4:traverseSLL(head);
	        break;
	        case 5:head=DeleteAtbeg(head);
	        break;
	        case 6:head=DeleteAtEnd(head);
	        break;
	        case 7:head=DeleteAfterPos(head);
	        break;
	        case 8:head=ReverseSLL(head);
	        break;
	        case 0:printf("Exited sucessfully!!!!!!");
	               exit(0);
	        break;
	        default:printf("Wrong Choice!!\n");
	    }
	}
	return 0;
}
