#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
struct CQ
{
    int element;
    struct CQ *NEXT;
};

struct CQ *FRONT = NULL;

int EMPTY(void);
void INSERT(int);
int REMOVE(void);
void DISPLAY();
void SEARCH(int);

void main()
{
    int num, choice, i;
    while (1)
    {
        printf("\nSelect an Option: \n");
        printf("\n1- Insert an element into the Queue");
        printf("\n2- Remove an element from the Queue");
        printf("\n3- Display all the elements in the Queue");
        printf("\n4- Search an element");
        printf("\n5- Exit");

        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n Enter the element to be inserted into the queue ");
            scanf("%d", &num);
            INSERT(num);
            getch();
            break;
        }

        case 2:
        {
            if (EMPTY() != TRUE)
            {
                i = REMOVE();
                printf("\n%d Element is removed from the Queue.", i);
                getch();
            }
            else
            {
                printf("\n Queue is Empty.");
                getch();
            }
            break;
        case 3:
        {
            DISPLAY();
            getch();
            break;
        }

        case 4:
        {
            printf("\n Enter the element to be searched: ");
            scanf("%d", &num);
            SEARCH(num);
            getch();
            break;
        }
        }
        default:
        {
            printf("\n Invalid Choice.");
            getch();
            break;
        }
        }
    }
}

int EMPTY(void)
{
    if (FRONT == NULL)
    {
        return TRUE;
        return FALSE; 
    }
} 

void INSERT(int ele)
{
    struct CQ *queue = (struct CQ *)malloc(sizeof(struct CQ));
    queue->element = ele;
    if (FRONT == NULL)
    {
        FRONT = queue;
        queue->NEXT = FRONT;
    }
    else
    {
        struct CQ *ptr;
        ptr = FRONT;
        for (ptr = FRONT; ptr->NEXT != FRONT; ptr = ptr->NEXT)
            ;
        ptr->NEXT = queue;
        queue->NEXT = FRONT;
    }
}

int REMOVE()
{
    struct CQ *ptr = NULL;
    if (EMPTY() == FALSE)
    {
        int j = FRONT->element;
        if (FRONT == FRONT->NEXT)
            FRONT = NULL;
        else
        {
            for (ptr = FRONT; ptr->NEXT != FRONT; ptr = ptr->NEXT)
                ;
            ptr->NEXT = FRONT->NEXT;
            FRONT = FRONT->NEXT;
        }
        return j;
    }
    return -1;
}

void DISPLAY()
{
    struct CQ *ptr = FRONT;
    if (EMPTY() == TRUE)
    {
        printf("\nQueue is Empty.");
        return;
    }
    else
    {
        printf("\n Elements present in Queue are:\n");
        printf("%d", ptr->element);
        ptr = ptr->NEXT;
        while (ptr != FRONT)
        {
            printf("\t%d", ptr->element);
            ptr = ptr->NEXT;
        }
    }
}

void SEARCH(int ele)
{
    int flag = 0;
    struct CQ *ptr = FRONT;
    if (EMPTY() == TRUE)
    {
        printf("\n\tQueue is Empty.");
        return;
    }
    else
    {
        if (ptr->element = ele)
            flag = 1;
        ptr = ptr->NEXT;
        while (ptr != FRONT)
        {
            if (ptr->element = ele)
                flag = 1;
            ptr = ptr->NEXT;
        }
        if (flag == 1)
            printf("\nElement %d is present in the list.", ele);
        else
            printf("\nElement %d is not present in the list.", ele);
    }
}