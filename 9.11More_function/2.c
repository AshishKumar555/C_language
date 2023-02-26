#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int p,q;
    printf("enter the two numbers\n");
    scanf("%d%d",&p,&q);
    hcf(p,q);
    printf("%d",hcf(p,q));
    return 0;
}
int hcf(int a,int b)
{
    int h;
    
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0&b%h==0)
        break;
    }
    return h;
}