#include<stdio.h>//caiculate the sum of cube n natural number:
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i*i*i;
    printf("The sum of cube %d natural no is=%d\n",n,s);

    return 0;

}