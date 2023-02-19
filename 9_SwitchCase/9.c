#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
        n=n+1;
        printf("nearest odd number=%d\n",n);
        break;
        case 2:
        printf("odd number number=%d\n",n);
        break;
    }
    
    return 0;
}