#include<stdio.h>
#include<conio.h>
int main()
{
    int var;
    printf("Enter any number\n");
    scanf("%d",&var);

    switch(var)
    {
        case 1:
        printf("Good\n");
        break;
        case 2:
        printf("better\n");
        break;
        case 3:
        printf("Best\n");
        break;
        default :
        printf("invalid\n");
        break;

    }
    return 0;
}