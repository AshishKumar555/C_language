#include<stdio.h>

int main()
{
    int a[10],sum=0,i;
    float Avg;
    printf("enter array values\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("avg  of array element\n");
    for(i=0;i<10;i++)
    
    sum=sum+a[i];
    
    Avg=sum/10;
    printf("%f ",Avg);
    
    return 0;
}
