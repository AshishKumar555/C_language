#include<stdio.h>
#include<conio.h>
int main()
{
    primefact(36);
    return 0;
}

void primefact(int n)
{
    int i;
    for(i=2;i!=n;i++)
    {
        while(n%i==0)
        {
        n=n/i;
        printf("%d ,",i);
           }
              }

}