#include<stdio.h>
int main()
{
    int i,j;
    char a[20],b[20],temp;
    printf("Enter the string\n");
    gets(a);
    for(i=0;i<19;i++)
    {
      for(j=i+1;j<20;j++)
      {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=b[j];
            b[j]=temp;
        }
      }
    }
    for(i=0;i<20;i++)
    printf("%c",a[i]);
    return 0;
}lkhggoiuh