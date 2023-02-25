#include<stdio.h>//caiculate the sum of n odd numbers:
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+2*i-1;
    printf("The sum of %d odd no is=%d\n",n,s);

    return 0;

}