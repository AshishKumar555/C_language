#include<stdio.h>

int main()
{
    int a[10],sum=0,i;
    printf("enter array values\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("sum of array element\n");
    for(i=0;i<10;i++)
    {
    sum=sum+a[i];
    }
    printf("%d  ",sum);
    
    return 0;
}
