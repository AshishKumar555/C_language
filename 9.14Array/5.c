#include<stdio.h>
int main()
{
    int a[10],i,min=1000;
    printf("enter the value of array\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("The minimum value is=%d",min);

    return 0;
}
