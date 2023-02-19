#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    
    for(i=1;i<=3;i++)
    {
       
        for(j=1;j<=19;j++)
        {
        if( (j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
              
        printf("N");
        else
        printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=19;j++)
        {
        if(j>=i&&j<=20-i)
        printf("N");
        else
        printf(" ");

        }
        printf("\n");
    }
    return 0;
}