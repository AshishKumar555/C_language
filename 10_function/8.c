#include<stdio.h>
#include<conio.h>
int perm(int n,int r);
int main()
{
    int s,p,q;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&p,&q);
    s=perm(p,q);
    printf("%d",s);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    
    return f;

}
int perm(int n,int r)
{
    int p;
    p=fact(n)/(fact(n-r));
    return p;

}