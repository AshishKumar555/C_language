#include<stdio.h>
int main()
{
    int i,c=0;
    char a[10],*p;
    p=a;
    printf("Enter the string\n");
    gets(a);
    while(*p !='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
        {
          c++;
        }
        
        p++;
    }
    printf("%d",c);


    return 0;
}