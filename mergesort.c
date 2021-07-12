#include<stdio.h>
void merge_sort(int [],int,int);
void merge(int [],int,int,int);
main()
{
    int n,i;
    printf("enter no of element:");
    scanf("%d",&n);
    int a[100];
    printf("enter element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf("sorted array :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
 void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    int b[100];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
