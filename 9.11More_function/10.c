#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
  int i,n,sum;
  for(i=1;i<=5;i++)
  {
    sum=sum+fact(i)/i;

  }
  printf("%d ",sum);
  return 0;
}
int fact(int n)
{
    int i,F=1;
    for(i=1;i<=n;i++)
    F=F*i;
    return F;
}   