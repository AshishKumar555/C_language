#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("enter array values\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("The greatest number in array=%d",max);
    return 0;
}