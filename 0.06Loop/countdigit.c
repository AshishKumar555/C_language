#include<stdio.h>//count number of digit:
#include<conio.h>
int main()
{
    int n,i=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n!=0)
    { 
    n=n/10;
    i++;
    }
    printf("total no of digit is=%d\n",i);

    return 0;

}