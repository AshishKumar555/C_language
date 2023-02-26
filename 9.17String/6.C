#include<stdio.h>
#include<string.h>
int main()
{

    char a[10],ch;
    printf("enter the strings\n");
    fgets(a,10,stdin);
    int l,i;
    for(l=0;a[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=ch;

    }
    
    printf("%s\n",a);

    return 0;
}