#include<stdio.h>
#include<conio.h>
void square(int x);
int main()
{
    int p;
    printf("Enter any value\n");
    scanf("%d ",&p);
    square(p);
    return 0;
}
void square(int x)
{
   int s;
   s=x*x;
    printf("%d ",s);
    
}
3216+