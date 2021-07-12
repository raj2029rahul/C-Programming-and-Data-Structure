#include<stdio.h>
main()
{

    int i,j,n,temp;
    printf("enter no of element \n");
    scanf("%d",&n);
    int a[n];
    printf("enter element\n");
    for(i=0;i<n;i++)
    {
        {
            scanf("%d",&a[i]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("ascending order of given number\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
}
