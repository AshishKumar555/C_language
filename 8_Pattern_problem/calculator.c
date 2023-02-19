#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
    int a,b,x;
    printf("\n1. Addition");
    printf("\n2.Subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\nEnter your choice\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("enter any two numbers\n");
               scanf("%d%d",&a,&b);
               printf("sum is %d",a+b);
               break;
        case 2: printf("enter any two numbers\n");
               scanf("%d%d",&a,&b);
               printf("subtraction is %d",a-b);
               break;
        case 3:     printf("enter any two numbers\n");
               scanf("%d%d",&a,&b);
               printf("Multiplication is %d",a*b);
               break;   
        case 4:   printf("enter any two numbers\n");
               scanf("%d%d",&a,&b);
               printf("Divvision is %d",a/b);
               break;         
        case 5:
             exit(0);
        default:
        printf("Invalid choice");     
    }
    }//end of while:
    return 0;
}