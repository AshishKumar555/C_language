#include<stdio.h>
int main()
{
    int i,j,temp,a[5],*p;
    p=a+4;
    printf("Enter the 5 numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",(a+i));
   
   for(i=0;i<5;i++)
       printf("%d ",*p--);
    return 0;
}