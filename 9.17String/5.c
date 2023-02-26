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
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
    return 0;
}