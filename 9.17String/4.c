#include<stdio.h>
# define N 20
int main()
{
    int i;
    char a[N];
    printf("enter the element\n");
    fgets(a,N,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    printf("The upper case of string\n");
    printf("%s",a);
    return 0;
}