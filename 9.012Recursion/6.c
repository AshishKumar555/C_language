#include<stdio.h>
void printevenR(int n);
int main()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    printevenR(n);
    return 0;

}
void printevenR(int n)
{
    if(n==0)
    return;
    printf("%d ",2*n);
    printevenR(n-1);
    
}