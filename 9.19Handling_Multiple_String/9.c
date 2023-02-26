#include<stdio.h>
#include<string.h>
int main()
{
    int i,f=1,n;
    char words[5][20];
    printf("Enter the string\n");
    for(i=0;i<5;i++)
    gets(words[i]);
    char a[10];
    printf("enter the string of the above list\n");
    gets(a);
    for(i=0;i<5;i++)
    {
        if(strcmp(words[i],a)==0)
        {
          printf("Enter the no find the factorial\n");
          scanf("%d",&n);
          for(i=n;i>=1;i--)
          {
            f=f*i;
            
          }
          printf("The factorial is ==>%d",f);
          break;
        } 
        
    }
    return 0;
}