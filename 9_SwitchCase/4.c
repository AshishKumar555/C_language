#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
   { 
    int n,K,L,A,temp;
    temp=K*K;
    printf("\n1.Set of three length are isoscele triangle or not\n");
    printf("\n2.Set of length are right or not\n");
    printf("\n3.Set o0f three length are equilateral or not\n");
    printf("\n4.Exit\n");
    printf("enter your choise\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    printf("\nEnter the value of k,L and A\n");
    scanf("%d%d%d",&K,&L,&A);
    if(K==L||L==A||A==K)
    printf("Isoscele triangle\n");
    else
    printf("Not isoscele triangle\n");
    break;
    case 2:
    printf("\nEnter the value of k,L and A\n");
    scanf("%d%d%d",&K,&L,&A);
    if(K*K==(L*L)+(A*A))
    printf("Right  triangle\n");
    else
    printf("Not Right triangle\n");
    break;
    case 3:
    printf("\nEnter the value of k,L and A\n");
    scanf("%d%d%d",&K,&L,&A);
    if(K==L&&L==A)
    printf("Equilateral triangle\n");
    else
    printf("Not Equilateral triangle\n");
    break;   
    case 4:
    exit(0);
    }
   } 
    return 0;
}