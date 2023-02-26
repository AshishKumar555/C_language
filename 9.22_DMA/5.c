#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,size=0;
    int *ptr;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    printf("Enter the %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("The sum of no is %d",sum);
    free(ptr);
    return 0;
}