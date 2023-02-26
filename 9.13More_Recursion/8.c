#include<stdio.h>
#include<conio.h>
int fib(int n);
int main()
{
    int n,i;
    printf("enter how many terms\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    printf("%d ",fib(i));
    return 0;
}
int fib(int n)
{
    if(n==1||n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}