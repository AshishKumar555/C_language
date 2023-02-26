#include<stdio.h>
#include<conio.h>
int sumNatural(int n);
int main()
{
    
   printf("%d ",sumNatural(5)); 

    return 0;
}
int sumNatural(int n)
    {
        int s;
    if(n==1)
    return 1;
    s=sumNatural(n-1)+n;
    return s;
}