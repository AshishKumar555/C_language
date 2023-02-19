#include<stdio.h>
#include<conio.h>
int fun(int n);
int main()
{//write a function to check the number is even or odd if even return 1 and
//if odd return 0:
int s,x;
printf("enter value of s\n");
scanf("%d",&s);
 x=fun(s);
    printf("%d",x);
    return 0;
}
int fun(int n)

{
    
    if(n%2==0)
    return 1;
    else
    return 0;
}