#include<stdio.h>
#include<conio.h>
int main()
{  //divisible by 7 or 3:
    int x;
    printf("Enter any number\n");
    scanf("%d",&x);
    if(x%3==0||x%7==0){
        printf("Number is divisible by 7 or3");

    }
    else
    {
    printf("Not divisible by 7 or 3");
    }
    return 0;
}