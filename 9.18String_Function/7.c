#include<stdio.h>
#include<string.h>
void palindrome(char a[10]);
int main()
{
   
    char a[10];
    printf("Enter the string\n");
    gets(a);
    palindrome(a);
    
    return 0;
}
void palindrome(char a[10])
{
    int i=0,j=strlen(a)-1;
     while(i<=j)
    {
        if(a[i]!=a[j])
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