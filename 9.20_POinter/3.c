#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
    int a[10],i;
    printf("Enter the 10 element\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    sort(a,10);
    for(i=0;i<10;i++)
    printf("%d ",*(a+i));/*  a[i]    */

    return 0;
}
void sort(int *ptr,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    for(j=i+1;j<size;j++)
   /*  if(ptr [i]>ptr [j])
     {
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
     }
     */
     if(ptr [i]>ptr [j])
     {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
     }

}