#include<stdio.h>
void insertion(int a[],int n);
main()
{
    int i,n;
    printf("enter no of element\n");
    scanf("%d",&n);
    int a[100];
    printf("emter element\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        insertion(a,n);
    printf("sorted array is:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void insertion(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        j=i;
        while((a[j]<a[j-1]) && j>0)
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}


