#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l;
    char a[100];
    printf("enter string\n");
    gets(a);
    l=strlen(a);
    printf("abbrvt form is %c",toupper(a[0]));
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf(".%c",toupper(a[i+1]));
            j=l+2;
        }
    }
}
