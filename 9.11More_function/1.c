#include<stdio.h>
#include<conio.h>
int lcm(int a,int b);
int main()

{
    int p,q;
    printf("Enter the two numbers\n");
    scanf("%d%d",&p,&q);
    lcm(p,q);
    printf("%d",lcm(p,q));
    return 0;
}
int lcm(int a,int b)
{
    int l;
   l=a>b?a:b;
    for(l=l;l<=a*b;l++)
    {
        if(l%a==0&&l%b==0)
        break;
    }
    return l;
}
