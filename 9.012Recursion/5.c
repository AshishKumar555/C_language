#include<stdio.h>
void printeven(int n);
int main()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    printeven(n);
    return 0;

}
void printeven(int n)
{
    if(n==0)
    return;
    printeven(n-1);
    printf("%d ",2*n);
}