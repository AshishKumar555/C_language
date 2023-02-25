//divisible by 2and 3:
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter any number\n");
    scanf("%d",&x);
    if(x%3==0&&x%2==0){
        printf("Number is divisible by 2 and 3");

    }
    else
    {
    printf("Not divisible by 2 and 3");
    }
    return 0;
}
