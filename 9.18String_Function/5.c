#include<stdio.h>
# define N 20
void upper(char a[N]);
int main()
{
    int i;
    char a[N];
    printf("enter the element\n");
    fgets(a,N,stdin);
    upper(a);
    
}
void upper(char a[N])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("The upper case of string\n");
    printf("%s",a);
}
    