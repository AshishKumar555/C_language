#include<stdio.h>
#include<conio.h>
int main()
{
    while(1)
  {  
    int choice,a,b;
    printf("\nEnter your choice\n");
    printf("\n1. Addition");
    printf("\n2.Subtraction");
    printf("\n3. multiplication");
    printf("\n4.Division");
    printf("\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter any two numbers\n ");
        scanf("%d%d",&a,&b);
        printf("the sum is=%d\n",a+b);
        break;
         case 2:
        printf("Enter any two numbers\n ");
        scanf("%d%d",&a,&b);
        printf("the subtraction is=%d\n",a-b);
        break;
         case 3:
        printf("Enter any two numbers\n ");
        scanf("%d%d",&a,&b);
        printf("the multiplication is=%d\n",a*b);
        break;
         case 4:
        printf("Enter any two numbers\n ");
        scanf("%d%d",&a,&b);
        printf("the division is=%d\n",a/b);
        break;
        default:
        printf("Invalid choice\n");
        break;

    }
  } 
    return 0;
}