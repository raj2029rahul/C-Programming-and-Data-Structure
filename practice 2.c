#include<stdio.h>
main()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    printf("enter rows and col of matrix 1\n");
    scanf("%d %d",&r1,&c1);
    printf("enter rows and col of 2nd matrix\n");
    scanf("%d %d",&r2,&c2);

    int a1[r1][c1], a2[r2][c2],mul[r1][c2];
    if(c1==r2)
    {
        printf("enter 1st matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
        printf("1st matrix is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d",a1[i][j]);
            }
            printf("\n");
        }
        printf("enter 2nd matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        printf("2nd matrix is \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf(" %d",a2[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    sum = sum + a1[i][k]*a2[k][j];
                }
                mul[i][j]=sum;
            }
        }
        printf("multiplication of matrix is \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%4d",mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
}
