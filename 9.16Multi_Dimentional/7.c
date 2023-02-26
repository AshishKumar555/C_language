#include<stdio.h>
# define N 3
int main()
{
    int i,j,s;
    int a[N][N];
    printf("Enter the number of element\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
         scanf("%d",&a[i][j]);
         printf("The Lower triangular \n");
             for(i=0;i<N;i++)
           {
             for(j=0;j<N;j++)
              {
                if(j>i)
             a[i][j]=0;
               }
           }
             for(i=0;i<N;i++)
             {
              for(j=0;j<N;j++)
              {
               printf("%d  ",a[i][j]);
              
              }
             printf("\n");
             
             }
      
   
    return 0;
}