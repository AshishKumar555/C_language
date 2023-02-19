#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int s,q;
    printf("enter the value of q\n");
    scanf("%d",&q);
    s=fact(q);
    printf("%d",s);
    return 0;

}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;

}