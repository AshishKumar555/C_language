#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sum=0,se=0,so=0;
    printf("enter 10 values\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        se=se+a[i];
        else
        so=so+a[i];
    }
    printf("sum of even numbers are=%d",se);
    printf("sum of odd numbers are %d",so);
    return 0;
}
