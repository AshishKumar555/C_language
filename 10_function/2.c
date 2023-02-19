#include<stdio.h>
#include<conio.h>
int simple(int p,int r,int t);
int main()
{
    int s,a,b,c;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    s=simple(a,b,c);
    printf("%d",s);
    return 0;

}

 int simple(int p,int r,int t)
{
    int si;
    si=(p*r*t)/100;
    return si;

}