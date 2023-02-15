#include<stdio.h>
#include<string.h>
int main()
{
    int temp,len;
    char s[100];
    printf("enter string\n");
    fgets(s,50,stdin);
    len=strlen(s);
    for(int i=0;i<len/2;i++){
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
    printf("Reverse of a string is:%s",s);
    return 0;
}
