#include<stdio.h>
#include<conio.h>
int sumeven(int n);
int main()
{
  int p;
  printf("enter any value\n");
  scanf("%d",&p);
    
   printf("%d ",sumeven(p)); 

    return 0;
}
int sumeven(int n)
    {
        int s;
    if(n==1)
    return 2;
    s=sumeven (n-1)+2*n;
    return s;
}