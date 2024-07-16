#include<stdio.h>
#define N 5
int duplicate(int a[N]);
int main()
{
    int i,a[N];
    printf("Enter the %d value of array\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    duplicate(a);
    printf("\n");
    printf("%d ",duplicate(a));
    return 0;
}
int duplicate(int a[N])
{
    int i;
        for(i=0;i<N;i++)
    
      if(a[i]==a[i+1]) // Adjacent means sata hua to i==i+1 me hi hoga
        return a[i];
      else{
        return -1;
      }
    
    
}
