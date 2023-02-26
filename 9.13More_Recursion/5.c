#include<stdio.h>
#include<conio.h>
int sumdigit(int n);
int main()
{
    printf("%d",sumdigit(1253));
    return 0;
}
int sumdigit(int n)
{
    
    if(n==0)
    return 0;
    
    return sumdigit(n/10)+(n%10);
}