#include<stdio.h>
#include<conio.h>
void natural(int n);
int main()
{
 int q;
 printf("enter the value of q\n");
 scanf("%d",&q);
 
 natural(q);
 return 0;
}

void natural(int n)
{
  int i;
  for(i=1;i<=n;i++)
  printf("%d ",i);
  printf("\n");
}