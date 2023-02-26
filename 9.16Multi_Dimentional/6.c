#include<stdio.h>
# define N 3
int main()
{
    int i,j,sum=0,scolum=0;
    int a[N][N];
    printf("Enter the number of element\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
      {
        sum =sum+a[i][j];
        scolum=scolum+a[j][i];
      }
    }
    printf("The sum of Row ==> %d\n",sum);
    printf("the sum of Column is ==> %d\n",scolum);    
    return 0;
}