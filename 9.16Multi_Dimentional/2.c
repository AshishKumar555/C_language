#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,sum=0,k;
    printf("Enter the 9 element of the first matrix\n");
    for(i=0;i<=2;i++)
    
      for(j=0;j<=2;j++)
    
    scanf("%d",&a[i][j]);
    printf("Enter the 9 element of the second matrix\n");
    for(i=0;i<=2;i++)
    
      for(j=0;j<=2;j++)
    
    scanf("%d",&b[i][j]);
    
    for(i=0;i<=2;i++)
    {
          for(j=0;j<=2;j++)
          {
           for(k=0;k<=2;k++)
           sum=sum+a[i][k]*b[k][j];
           c[i][j]=sum;
          }
          printf("\n");
    }
    printf("the multiplication of matrices\n");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
       printf("%d ",c[i][j]);
      }
      printf("\n");
    }
    return 0;

}