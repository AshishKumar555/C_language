#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,count;
    printf("enter any number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      if(n%i==0)
      {
        count++;
      }
      if(count==2)
      printf("prime number");
      else
      printf("not prime number");


    return 0;

}