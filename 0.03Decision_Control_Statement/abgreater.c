#include<stdio.h>
#include<conio.h>
int main()
{   //Greater number between two numbers:
    int x,y;
    printf("enter any two numbers\n");
    scanf("%d%d",&x,&y);
    if(x==y)
    printf("number is equal=%d",x);
    if(x>y)
    {
        printf("The greater number is =%d",x);
    
    }
    else
    {
        if(x<y)
        printf("the smaller number is=%d",x);
    }

   
    return 0;
}