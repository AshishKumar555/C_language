#include<stdio.h>
# define N 3
int main()
{
    int i,j,cnt=0,a[N][N];
    printf("Enter the element of matrix\n");
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
            if(a[i][j]==0)
            cnt++;        }
    }
    if(cnt>(N*N)/2)
    printf("The matrix is sparse\n");
    else
    printf("the matrix is NOT sparse\n");
     return 0;
}