//array sort element:
#include<stdio.h>
void sort(int a[]); 
int main()
{
    int a[5],i;
    printf("enter the no\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    sort(a);
    return 0;
}
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}