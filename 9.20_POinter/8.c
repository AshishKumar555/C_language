#include<stdio.h>

int main()
{
    int a[10],i,sum=0,*p;
    p=a;
    printf("Enter the 10 element\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<10;i++)
    {
        sum=sum+*(p+i);
    }
    printf("%d ",sum);

    return 0;
}