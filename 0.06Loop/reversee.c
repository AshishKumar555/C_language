#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,rev=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    printf("the reverse number is=%d\n",rev);
    return 0;
}
