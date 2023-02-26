#include<stdio.h>
#define N 10
void frequency(int a[N]);
int main()
{
    int a[N],i;
    printf("Enter the value of element\n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    frequency(a);
   
    return 0;
}
void frequency(int a[N])
{
  int i,frq[100]={0};
  for(i=0;i<N;i++)
  {
    frq[a[i]]++;
  }
  printf("The frequency of the array element\n ");
  for(i=0;i<100;i++)
  {
    if(frq[i] !=0)
    printf("%d==>%d\n",i,frq[i]);
  }


}