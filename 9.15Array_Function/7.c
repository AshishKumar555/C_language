#include<stdio.h>
#define N 8
int duplicate(int a[N]);
int main()
{
    int i,a[N];
    printf("enter the %d value of the array\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    duplicate(a);
    printf("\n");
    printf("%d",duplicate(a));
    return 0;
}
int duplicate(int a[N])
{
    int i,j,count=0;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(a[i]==a[j])
             count++;
            
        }
    }
    return count;
}