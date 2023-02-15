#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,l;
    char a[100];
    printf("enter string\n");
    fgets(a,50,stdin);
    l=strlen(a);
    printf("abbrvt form is %c",toupper(a[0]));
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf(".%c",toupper(a[i+1]));
        }
    }
}
