#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,max=0;
    int *p;
    printf("enter the size of array\n ");
    scanf("%d",&size);
    p=(int*)malloc(size*sizeof(int));
    printf("Enter the %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<size;i++)
    {
        if(max<*(p+i))
        max=*(p+i);
    }
    printf("The greatest no is \n:==> %d",max);
    free(p);
        return 0;
}