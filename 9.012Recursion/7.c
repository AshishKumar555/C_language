#include<stdio.h>
void square(int n);
int main()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    square(n);
    return 0;

}
void square(int n)
{
    if(n==0)
    return;
    square(n-1);
    printf("%d ",n*n);
}