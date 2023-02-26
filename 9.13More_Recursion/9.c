#include<stdio.h>
#include<conio.h>
int countdigit(int n);
int main()
{
    int p;
    printf("enter the number\n");
    scanf("%d",&p);
    printf("%d",countdigit(p));
    return 0;
}
int countdigit(int n)
{
   static int c=0;
    if(n==0)
    return c;
    else
    c++;
     return countdigit(n/10);
    
      
     
}
