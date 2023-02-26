#include<stdio.h>
#define N 5
void reversearray(int a[N]);
int main()
{
    int i,a[N];
    printf("Enter the %d value of array\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    reversearray(a);
    return 0;
}
void reversearray(int a[N])
{
    int i;
    for(i=N-1;i>=0;i--)
    printf("%d ",a[i]);
    
}