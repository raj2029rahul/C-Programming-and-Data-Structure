#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int stack[SIZE],top=-1;

main()
{
    int value,ch;
    while(1)
    {
        printf("enter choice\n1.push\n2.pop\n3.traverse\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the value to be insert:");
                    scanf("%d",&value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
            default: printf("wrong choice");
        }
    }
}
void push(int value)
{
    if(top==SIZE-1)
        printf("overflow\n");
    else
        top++;
        stack[top]=value;
}
void pop()
{
    if(top==-1)
        printf("underflow\n");
    else
        printf("popped item is %d",stack[top]);
        top--;
}
void traverse()
{
    if(top==-1)
        printf("underflow");
    else
    {
        int i;
        printf("stack element is:\n");
        for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
