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
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
            }
        }
    }
    printf("bubble sorted of given nuber is\n");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}
