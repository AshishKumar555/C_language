#include<stdio.h>
int length(char s[20]);
int main()
{
    char s[20];
    printf("Enter the string\n ");
    fgets(s,20,stdin);
    length(s);
    printf("%d",length(s));
    return 0;
}
int length(char s[20])
{
    int i;
    for(i=0;s[i];i++);
    return i-1;
}