#include<stdio.h>
#include<conio.h>
int hcf(int a,int b);
int main()
{
    int  p,q;
    printf("enter any two alues\n");
    scanf("%d%d",&p,&q);
    printf("%d",hcf(p,q));
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
    return a;
    hcf(b,a%b);
}