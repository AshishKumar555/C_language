#include<stdio.h>
int main()
{
    int i;
    char a[10],b[10];
    printf("enter the string\n");
    gets(a);
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
    return 0;
}