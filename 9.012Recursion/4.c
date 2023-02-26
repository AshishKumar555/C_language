#include<stdio.h>
#include<conio.h>
void printNR(int n);
int main()
{
  int n;
  printf("Enter the number of n\n");
  scanf("%d",&n);
  printNR(n);
  
  return 0;
}
void printNR(int n)
{
  if(n==0)
  return;
  printf("%d ",2*n-1);
  printNR(n-1);
  
}