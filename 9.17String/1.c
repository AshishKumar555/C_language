#include<stdio.h>
int main()
{
   /* char str[10]="BHOPAL";
    int i;
    for(i=0;str[i];i++);
    printf("%d",i);
    return 0;
    */
    int i;
    char str[20];
    printf("enter the element\n");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++);
    printf("%d",i);
    return 0;
}