#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,size=10;
    p=(int*)malloc(size*sizeof(int));
    scanf("%d",p);
     if(p=NULL)
    {
        printf("The memory allocation failed\n");
    }
    printf("%d",*p);
    
    return 0;
}