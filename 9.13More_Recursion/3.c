#include<stdio.h>
#include<conio.h>
int sumodd(int n);
int main()
{
    int p;
    printf("Enter the value\n");
    scanf("%d",&p);
    printf("%d ",sumodd(p));
    return 0;
}
int sumodd(int n)
{
    if(n==1)
    return 1;
   return sumodd(n-1)+2*n-1;
}