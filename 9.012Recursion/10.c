#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("enter the value of no.\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n==0)
    return;
    printf("%d",n%10);
    reverse(n/10);
}