#include<stdio.h>
#include<conio.h>
int main()
{  //Greatest number between three digit:
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("a is greater number=%d",a);
        else
        printf("c is greater number=%d",c);
    }
    else
    {
       if(b>c)
       printf("b is the greater number=%d",b);
       else
       printf("c is greater number=%d",c);
    }
       
  return 0;
}