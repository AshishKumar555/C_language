#include<stdio.h>
#include<conio.h>
int main()
{
    int yrs;
    printf("Enter the years\n");
    scanf("%d",&yrs);
    if(yrs%100==0)
    {
        if(yrs%400==0)
        printf("leap years\n");
        else
        printf("Not leap year\n");
    }
    else{
          if(yrs%4==0)
          printf("Leap year\n");
          else
          printf("Not a leap year");
    }
    return 0;
}