#include<stdio.h>
#include<string.h>
main()
{
    char s[100];
    printf("enter string\n");
    gets(s);
    strrev(s);
    printf("reverse of a string is\n %s\n",s);
}
