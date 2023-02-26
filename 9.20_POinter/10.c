#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    int i,l;
    char a[20],ch,*p;
    p=a;
    printf("Enter the string\n");
    gets(a);
    
    
    l=strlen(a);
    printf(" The length of string is==>%d",l);
    for(i=0;i<l/2;i++)
    {
        ch=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=ch;

    }

    printf("\n%s",a);
    

return 0;
}kuuyfo8