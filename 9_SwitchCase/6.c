#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    
    switch(year%100==0)
    {
        case 1:switch(year%400==0)
            {
               case 1:
               printf("Leap year\n");
               break;
               case 0:
               printf("Not Leap year\n");
               break;
               
            }
            break;
        case 0:
               switch(year%4==0)
               {
                case 1:printf("leap year\n");
                break;
                case 0:
                      printf("Not leap year\n");
                      break;
               }    
               break ;       
    }
    return 0;
}
    