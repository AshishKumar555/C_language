#include<stdio.h>
#include<conio.h>
int main()
{
 printf("%d",fact(5));
 return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;

}
int comb(int n,int r)
{
    return fact(n)/fact(r)*fact(n-r);
}
