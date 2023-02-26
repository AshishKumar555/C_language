#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
   
    printf("Enter the first number\n");
    scanf("%d",p);
     printf("Enter the second number\n");
    scanf("%d",q);
    if(*p >*q)
    {
        printf(" the Maximum no ==> %d",*p);
    }
    else
    printf(" Max ==> %d",*q);
    
    return 0;
}