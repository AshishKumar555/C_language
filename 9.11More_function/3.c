#include<stdio.h>
#include<conio.h>
int prime(int n);
int main()
{
    int p;
    printf("enter a number\n");
    scanf("%d",&p);
    prime(p);
    printf("%d",prime(p));

    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       return 0;
       else
      return 1;
    } 
}