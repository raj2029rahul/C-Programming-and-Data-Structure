#include<stdio.h>
main()
{
    int i,j,a[10][10],r,c,b[10][10],sum[10][10];
    printf("enter no of rows and col for mat");
    scanf("%d%d",&r,&c);
    printf("enter 1st matrix\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
            {
            scanf("%d",&a[i][j]);
            }
        printf("\n");
    }
    printf("enter 2nd matrix\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j]+b[i][j] ;
        }
    }
    printf("sum of matrix is\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

            printf("%d",sum[i][j]);
        }
        printf("\n");
    }

}
