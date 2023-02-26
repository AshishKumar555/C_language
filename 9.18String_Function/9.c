#include<stdio.h>
#include<string.h>
void swap(char a[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int i,start=0,end=0,flag=0;
    char a[20]="JAY SHREE RAM";
    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
              flag=1;
              break;
            }
            end++;
            i++;
        }
        swap(a,start,end-1);
        if(flag==1)
        break;
        start=end++;
        i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
    
    return 0;
}jhghgjy