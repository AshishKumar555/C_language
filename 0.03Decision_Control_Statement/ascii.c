//character is lower case or upper case:
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any alphabet\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("Upper case");
    else if(ch>=97&&ch<=122)
    printf("lower case");
    else if(ch>='0'&&ch<='9')
    printf("digit");
    else
    printf("Special symbol");
    return 0;

}