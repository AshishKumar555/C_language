#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("entr any number\n");
    scanf("%d",&x);
    if(x>0)
    printf("Positive number");
    if(x==0)
    printf("Zero");
    if(x<0)
    printf("Negative number");

        return 0;
}