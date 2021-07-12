#include<stdio.h>
main()
{
    int i,j,t,n;
    printf("enter no of element\n");
    scanf("%d",&n);
    int a[100];
    printf("enter element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
            }
        }
    }
    printf("selection sorted of given nuber is\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}

