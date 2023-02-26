#include<stdio.h>//without function count frequency:
int main()
{
    int i,cnt=0;
    int frq[100]={0},a[10];
    printf("enter the element of a[]\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        frq[a[i]]++;
    }
    
    printf("the frequency of the given no\n");
    for(i=0;i<100;i++)
    {
        if(frq[i] !=0)
        {
            printf("%d ==>%d\n",i,frq[i]);
        }
    }
    return 0;
}