#include<stdio.h>
main()
{
    char s[100];
    int i,count=0;
    printf("enter sentence for vowel count\n");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
   {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        count++;
    }
   }
    if(count==0)
        printf("no vowel are present");
    else
        printf("no. of vowel is %d",count);
}
