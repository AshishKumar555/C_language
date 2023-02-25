#include<stdio.h>//caiculate the sum of n even natural number:
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+2*i;
    printf("The sum of %d natural no is=%d\n",n,s);

    return 0;

}