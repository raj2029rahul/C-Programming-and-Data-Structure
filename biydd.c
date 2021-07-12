#include<stdio.h>
main()
{
    int n,i;
    printf("enter no of element\n");
    scanf("%d",&n);
    int a[n];
    printf("enter element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
