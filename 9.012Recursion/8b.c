#include<stdio.h>
void binary(int n);
int main()
{
    int n;
    printf("enter the value of no.\n");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n)
{
    if(n==0)
    return;
    binary(n/2);
    printf("%d",n%2);
}