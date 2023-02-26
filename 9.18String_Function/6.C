#include<stdio.h>
void alphanumeric(char s[20]);
int main()
{
    int i;
    char s[20];
    printf("enter the no of string\n");
    fgets(s,20,stdin);
    alphanumeric(s);
    return 0;
}
void alphanumeric(char s[20])
{
    int i;
    for(i=0;s[i];i++)
    if(s[i]>='a'&&s[i]<='z'||s[i>='1'&&s[i]<=9])
        printf("Alphanumeric\n");
    else
    printf("not alphanumeric\n");
}uyffouy