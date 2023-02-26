#include<stdio.h>
#include<conio.h>
int sumsquare(int n);
int main()
{
    int m;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("%d",sumsquare(m));
    return 0;
}
int sumsquare(int n)
{
    if(n==1)
    return 1;
    return sumsquare(n-1)+n*n;
}