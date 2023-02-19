#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    switch(n<=0)
    {
        case 1:
        printf("negative number\n");
        break;
        case 2:
        printf("positive number\n");
        break;
    }
    
    return 0;
}