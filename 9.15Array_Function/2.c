#include<stdio.h>
int smallest(int a[]);
int main()
{
    int a[10],i;
    printf("enter array value\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    smallest(a);
    printf("The minimum no is= %d ",smallest(a));
    return 0;
}
int smallest(int a[])
{
    int i,min=99999;
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
         min=a[i];
        }
    }
    return min;
    
}