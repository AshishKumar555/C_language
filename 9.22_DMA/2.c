#include<stdio.h>

int main()
{
    int *ptr,i=0,sum=0,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
      printf("Memory allocation failed\n");
      return 0;
    }
    printf("the entered %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\nThe average is %f",(float)sum/size);//%d",sum/size:
    free(ptr);
    return 0;
}