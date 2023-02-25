#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("divisible by five");

    }
    else
    printf("not divisible by five");
    return 0;
}