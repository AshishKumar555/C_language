#include<stdio.h>
int main()
{
    int i,N,x=2;
    printf("enter the no.\n");
    scanf("%d",&N);
    while(N)
    {
     for(i=2;i<=x;i++)
        {
        if(x%i==0)
         break;
        }
         if(i==x)
         {
          printf("%d ",x);
          N--;
          }
     
     x++;
     
    }
    return 0;
}npot clear