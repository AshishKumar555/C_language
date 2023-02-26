#include<stdio.h>
int greatest(int a[]);
int main()
{
  int i;
  int a[10];
  printf("enter any no.\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);
  greatest(a);
  printf("the maximum no=%d",greatest(a));
    return 0;
}
int  greatest(int a[])
{
    int max=0,i;
  for(i=0;i<10;i++)
  {  
    if(max<a[i])
    {
    max=a[i];
    }
  }
  return max;
    
  

}