#include<stdio.h>
#define N 6
int main()
{
    int a[N];
    int i,temp,pos,dir;
    printf("Enter the value of array is\n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    printf("LEFT:0 RIGHT :1\n");
    scanf("%d",&dir);

    printf("Enter the no. of position to be shifted\n");
    scanf("%d",&pos);
    while(pos)
    {
       if(dir==1)
      {
       temp=a[N-1];
       for(i=N-1;i>0;i--)
      a[i]=a[i-1];
       a[0]=temp;
       }
       else
     {
      temp=a[0];
      for(i=0;i<N;i++)
    
       a[i]=a[i+1];
       a[N-1]=temp;
       }
       pos--;
    }
    
    printf("After shifting\n");
    
    for(i=0;i<N;i++)
    printf("%d  ",a[i]);
    return 0;
}