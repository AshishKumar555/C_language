#include<stdio.h>//N odd numbers:
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter any number\n  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
    printf("%d\n",2*i-1);
    return 0;
}