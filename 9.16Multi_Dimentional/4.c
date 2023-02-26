#include<stdio.h>
# define N 3
int main()
{
    int i,j,a[N][N],sum=0;
    
    
    printf("Enter the no. of element\n");
    for(i=0;i<N;i++)
     
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
        printf("The sum of right diognal\n");
    for(i=0;i<N;i++)
     {
        for(j=0;j<N;j++)
        {
          if(i==j)
          sum=sum+a[i][j];

        }
     }
     printf("%d",sum);
    return 0;
}