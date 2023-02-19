#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no. between 1-12\n");
    scanf("%d",&n);
    switch(n)
    {
        
        case 1:
        printf("January=31");
        break;
        case 2:
        printf("february=28or29");
        break;
        case 3:
        printf("march=31");
        break;
        case 4:
        printf("April=30");
        break;
        case 5:
        printf("May=31");
        break;
        case 6:
        printf("June=30");
        break;
        case 7:
        printf("July=31");
        break;
        case 8:
        printf("August=31");
        break;
        case 9:
        printf("September=30");
        break;
        case 10:
        printf("October=31");
        break;
        case 11:
        printf("November=30");
        break;
        case 12:
        printf("December=31");
        break;
        default:
        printf("Invalid no.");
    }       
    return 0;
}