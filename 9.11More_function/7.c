#include<stdio.h>
#include<conio.h>
void fib(int m);
int main()
{
    int p;
    printf("enter the no.\n");
    scanf("%d",&p);
    fib(p);
    return 0;
}
void fib(int m)
{
    int i,a=0,b=1,c;
     for(i=1;i<=m;i++)
    {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    
    }
}