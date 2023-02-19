#include<stdio.h>//caiculate the sum of cube n natural number:
#include<conio.h>
int main()
{
    int a=0,b=1,c,n,i;
     printf("enter any number\n");
     scanf("%d",&a);
     for(i=1;i<=n;i++)
     {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
     }
}
