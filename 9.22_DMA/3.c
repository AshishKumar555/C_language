#include<stdio.h>
int main()
{
    int *ptr,i,sum=0,size=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("The memory allocation is failed");
        return 0;
    }
    printf("Enter the %d values\n",size);
    for(i=0;i<size;i++)
    {
     scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
     sum=sum+*(ptr+i);
    }
    printf("\nThe sum is %d",sum);
    free(ptr);
    return 0;
}