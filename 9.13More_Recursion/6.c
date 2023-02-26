#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int p;
    printf("enter the value \n");
    scanf("%d",&p);
    printf("%d",fact(p));
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    return fact(n-1)*n;
}