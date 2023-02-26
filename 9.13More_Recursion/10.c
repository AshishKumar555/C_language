#include<stdio.h>
#include<conio.h>
int power(int a,int b);
int main()
{
    int b,p;
    printf("enter value of base & power\n");
    scanf("%d%d",&b,&p);
    printf("%d",power(b,p));
    
    return 0;
}
int power(int a,int b)
{
    if(b==0)
    return 1;
    return (a*power(a,b-1));
}