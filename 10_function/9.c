#include<stdio.h>
int digit(int n);
int main()
{
    int n;
    printf("Enter a number \n ");
    scanf("%d",&n);
    digit(n);
    return 0;
}
int digit(int n)
{
    int i=2;
    for(int i=2;i>1;i++)
    {
       while(n%i==0)
       {
            printf("%d ",i);
            n=n/i;
            
       }
    }

}


