#include<stdio.h>
int main()
{
    int n;
    printf("Enter the limit of text\n");
    scanf("%d",&n);
    char *ptr;
    
    ptr=(char*)calloc(ptr,sizeof(char));
    printf("enter the string\n");
    fflush(stdin);
    gets(ptr);
    printf("The string is %s",ptr);
    free(ptr);

    return 0;
}