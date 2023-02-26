#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[5][20],t[20];
    printf("Enter 5 names\n");
    for(i=0;i<5;i++)
    gets(a[i]);
    printf("Enter the string to be searched\n");
    gets(t);
    for(i=0;i<5;i++)
    {
    
        if(strcmp(a[i],t)==0)
        {
        printf(" %d : Found",i);
        break;
        }

      
    }
    if(i==5)
    printf(" : Not Found");
    return 0;
}