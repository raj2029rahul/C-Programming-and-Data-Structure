#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int a[SIZE],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();

main()
{
    int ch,item;
    while(1)
    {
        printf("\n1.insert\n2.delete\n3.display\n0.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
        }
    }
}
void enqueue(int value)
{
    int item;
    printf("enter the value of item:");
    scanf("%d",&item);
    if(rear==SIZE-1)
        printf("overflow");
    else
        if(front==-1)
        front=0;
        rear=rear+1;
        a[rear]=item;
}
void dequeue()
{
    if(front==rear)
        printf("underflow");
    else{
        printf("deleted item is %d",a[front]);
        front++;
        if(front==rear)
            front=rear=-1;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
        printf("%d  ",a[i]);
}

