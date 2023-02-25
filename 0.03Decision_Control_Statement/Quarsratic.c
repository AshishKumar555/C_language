#include<stdio.h>
#include<conio.h>
int main()
{//quardratic equation:
    int a,b,c;
    float D,x,y;
    printf("Enter the cofficient of x^2,x and c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b-4*a*c);
    if(D<0)
    printf("Root are imaginary");
    if(D==0){
    printf("Real and equal\n");
    x=-b/(2*a);
    printf("root is %f",x);
      
    }
    if(D>0){
    printf("Root are real and distinct\n");
    x=(-b+sqrt(D))/2*a;
    y=(-b-sqrt(D))/2*a;
    printf(" Root is %f",y);
    }

    return 0;



}