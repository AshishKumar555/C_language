//first n natural numbers in revers order:
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter any number\n  ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d\n",i);
    return 0;
}