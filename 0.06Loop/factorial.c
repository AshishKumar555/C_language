#include<stdio.h>//caiculate the factorial of  n number:
#include<conio.h>
int main()
{
    int i,n,f=1;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    f=f*i;
    printf("The factorial of %d is=%d\n",n,f);

    return 0;

}