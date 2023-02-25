//first 10 odd natural numbers in reverse:

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=20;i>=1;i--)
    if(i%2)
    printf("%d\n",i);
    return 0;
}