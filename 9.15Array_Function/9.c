#include<stdio.h>
int main()
{
    int i,frq[100]={0};
    int a[10]={1,7,9,5,4,8,3,2,5,9};
    for(i=0;i<10;i++)
    {
        frq[a[i]]++;
    }
    for(i=0;i<100;i++)
     {
    if(frq[i] !=0)
        printf("%d ==> %d\n",i,frq[i]);
     }
    return 0;
}