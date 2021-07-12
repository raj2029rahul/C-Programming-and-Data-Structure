#include<stdio.h>
#include<string.h>
main()
{
    int i,space=0;
    char s[100];
    printf("enter string\n");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            space++;
        }
    }
    printf("no of white space is %d",space);
}
