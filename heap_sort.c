#include<stdio.h>
void max_heapify(int [],int,int);
void heap_sort(int [],int);

void max_heapify( int a[],int n, int i)
{
    int large=i;
    int l=(2*i);
    int r=(2*i)+1;
    int temp;
    while(l<=n && a[l]>a[large])
    {
        large=l;
    }
    while(r<=n && a[r]>a[large])
    {
        large=r;
    }
    if(large!=i)
    {
        temp=a[large];
        a[large]=a[i];
        a[i]=temp;
        max_heapify(a,n,large);
    }
}
void heap_sort(int a[],int n)
{
    int i,temp;
    for(i=n/2;i>1;i--)
    {
        max_heapify(a,n,i);
    }
    for(i=n;i>=1;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        max_heapify(a,i-1,1);
    }
}
main()
{
    int i,n;
    printf("enter no of element:");
    scanf("%d",&n);
    int a[100];
    printf("enter nos:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    heap_sort(a,n);
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%6d",a[i]);
}
