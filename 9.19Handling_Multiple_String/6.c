#include<stdio.h>
#include<string.h>
int main()
{
    int p;
    char a[5][20];
    printf("Enter string\n");
    for(p=0;p<5;p++)
    gets(a[p]);
    for(p=0;p<5;p++)
    {
           int i=0,j=strlen(a[p])-1;
            while(i<=j)
           {
           if(a[p][i]!=a[p][j])
             {
              break;
             }
              i++;
             j--;
           }
       if(i>j)
       {
        printf("palindrome\n");
       }
       else
       printf("Not palindrome\n");
    }
    return 0;
}
