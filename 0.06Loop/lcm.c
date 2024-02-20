#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,m,l;
    printf("Enter any two numbers\n");
    scanf("%d%d",&n,&m);
    for(i=n>m?n:m;i<=n*m;i++)
    if(i%n==0&&i%m==0){
         break;
    }
    printf("LCM is=%d",i);

}
