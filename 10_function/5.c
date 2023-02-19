#include<stdio.h>
void oddN(int n);
int main()
{
    int n,p;
    printf("enter the value of p\n");
    scanf("%d",&p);
    oddN(p);
    return 0;

}
void oddN(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
    printf("%d ",2*i-1);
    }
}