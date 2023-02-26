#include<stdio.h>
#include<stdio.h>
#define N 10
void unique(int a[N]);
int main()
{
    int i,a[N];
    printf("enter the %d value of the array\n",N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    unique(a);
    
    return 0;
}
void unique(int a[N])
{
    printf("All the unique element are\n");
    int i,frq[100]={0};
    for(i=0;i<N;i++)
    {
        frq[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(frq[i]==1)
        {
            printf("%d\n",i);
        }
    }
}