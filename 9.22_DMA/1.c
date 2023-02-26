#include<stdio.h>

int main()
{
    char *str,c;
    int i=0,j=1;
    str=(char*)malloc(sizeof(char));
    printf("Enter the string\n");
    while(c !='\0')
    {
        c=getc(stdin);
        j++;
        str=(char*)malloc(str,sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("\n the entered string is :%s",str);
    free(str);
    return 0;
}