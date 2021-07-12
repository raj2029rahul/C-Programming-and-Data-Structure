#include<stdio.h>
int fibo(int);
main()
{
    int n,i;
    printf("enter the no of series\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fibo(i));
}

int fibo(int n)
{
    if(n==1 ||n==2)
        return(1);
    return(fibo(n-1)+fibo(n-2));
}
