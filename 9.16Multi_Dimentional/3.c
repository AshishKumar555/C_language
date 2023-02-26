#include<stdio.h>
int main()
{
    int i,j,a[3][3],aT[3][3],temp;
    printf("Enter the 9 element of the first matrix\n");
    for(i=0;i<=2;i++)
    
      for(j=0;j<=2;j++)
    
    scanf("%d",&a[i][j]);
    printf("After transpose matrix\n");
    for(i=0;i<=2;i++)
    
      for(j=0;j<=2;j++)
         if(i<j)
         {
         temp=a[i][j];
         a[i][j]=a[j][i];
         a[j][i]=temp;
         }
    
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
       printf("%d  ",a[i][j]);
      }
       printf("\n");
      
    }
    return 0;
}