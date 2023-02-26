#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n=5;
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the value of p\n");/*  *p=10
                                      */
    scanf("%d",p);                      
    printf("before free %d\n",*p);
    free(p);
    printf("After free %d\n",*p);
    return 0;
}