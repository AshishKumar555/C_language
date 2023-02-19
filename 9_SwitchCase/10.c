#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float Root1,Root2;
    int a,b,c,D,i=sqrt(-1);
    printf("Enter the value of a , b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
        case 1:
        printf("real and distinct\n");
        Root1=(-b/2*a)+sqrt(b*b-4*a*c)/2*a;
         Root2=(-b/2*a)-sqrt(b*b-4*a*c)/2*a;
        printf("\n");
         Root2=(-b/2*a)+-sqrt(b*b-4*a*c)/2*a;
        printf("%f %f",Root1,Root2);
        break;
        case 0:
        switch(D==0)
        {
            case 1:
            printf("Real and equal\n");
            Root1=-b/2*a;
            printf("%f",Root1);
            break;
            case 0:
            printf("Imaginary\n");
            Root1=(-b/2*a)+(4*a*c-b*b)*i/2*a;
            printf("\n");
             Root2=(-b/2*a)-(4*a*c-b*b)*i/2*a;
            printf("%f %f",Root1,Root2);
            break;



        }
        break;
    }
    
   return 0;   
}