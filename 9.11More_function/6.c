#include<stdio.h>
#include<conio.h>
void prime(int a,int b);
int main()
{
    int l,u;
    printf("enter two numbers\n");
    scanf("%d%d",&l,&u);
    prime(l,u);
    return 0;  
}
void prime(int a,int b)
{
    int i,j;
   for(i=a;i<=b;i++)
    {
        for(j=2;j<=i-1;j++)
        {
        if(i%j==0)
        break;
        }
    
        if(j==i)
        printf(" %d ",i);

    }
    
}