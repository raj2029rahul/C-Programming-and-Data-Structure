#include <stdio.h>
int main()
{
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even number",n);
    }
    else
    {
        printf("%d is odd number",n);
    }
    printf("\n");
}
