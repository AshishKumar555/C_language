#include<stdio.h>
#include<conio.h>
int nextP(int n);
int main()
{
    int p;
    printf("enter a number\n");
    scanf("%d",&p);
    nextP(p);
    printf("%d",nextP(p));

}
int nextP(int n)
{
    int i,j;
    for(i=n+1;i>0 ;i++)
    {
       for(j=2;j<=i-1;j++)
       {
           if(i%j==0)
           break;
       }
           if(j==i)
           return i;
       
         

       
       
       
    }
}   