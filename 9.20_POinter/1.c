#include<stdio.h>

void swap(int *p,int*q);
int main()
{
    int a,b,*p,*q;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d  %d",a,b);
    return 0;

}
void swap(int *p,int*q)
{
  int t;
  t=*p;
  *p=*q;
  *q=t;
}