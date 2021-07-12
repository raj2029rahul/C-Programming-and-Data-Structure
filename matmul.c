#include<stdio.h>
main()
{
  int i,j,k,r1,r2,c1,c2,m1[r1][c1],m2[r2][c2],sum=0,mul[i][j];
  printf("enter no of rows and column of 1st matrix\n");
  scanf("%d%d",&r1,&c1);
  printf("enter no of rows and column of 2st matrix\n");
  scanf("%d%d",&r2,&c2);
  if(c1==r2)
  {
  printf("enter 1st matrix\n");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
    scanf("%d",&m1[i][j]);
    }
    printf("\n");
  }
  printf("enter 2st matrix\n");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
    scanf("%d",&m2[i][j]);
    }
    printf("\n");
  }


     for(i=0;i<r1;i++)
     {
        for(j=0;j<c2;j++)
        {
           for(k=0;k<r2;k++)
           {
              sum+=m1[i][k]*m2[k][j];
           }
              mul[i][j]=sum;
        }
        printf("\n");
     }
     printf("multiplication of matrix is\n");
     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
         printf("%d",mul[i][j]);
       }
       printf("\n");
     }
  }
  else
  {
    printf("multiply isnt possible");
  }
}
