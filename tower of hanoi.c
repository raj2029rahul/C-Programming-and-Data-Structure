#include<stdio.h>
void toh(int n,char a,char b,char c)
{
    if(n==1)
        printf("\ndisc move from %c to %c\n",a,c);
    else{
        toh(n-1,a,c,b);
        printf("disc move from %c to %c",a,c);
        toh(n-1,b,a,c);
        }
}

main()
{
    int n;
    printf("enter the no of disk\n");
    scanf("%d",&n);
    toh(n,'a','b','c');
}
