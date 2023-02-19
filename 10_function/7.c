#include<stdio.h>
#include<conio.h>
int fact(int n);
int comb(int n,int r);
int main()
{
    int s,p,q;
    printf("enter the value of n and r\n");
    scanf("%d%d",&p,&q);
    s=comb(p,q);
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
int comb(int n, int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}