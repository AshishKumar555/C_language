#include<stdio.h>
#include<string.h>
void reverse(char a[10]);
int main()
{

    char a[10],ch;
    printf("enter the strings\n");
    fgets(a,10,stdin);
    reverse(a);
    
    
    return 0;
}
void reverse(char a[10])
{
    int l,i;
    char ch;
    l=strlen(a);
    printf(" The length of string is==>%d",l);
    for(i=0;i<l/2;i++)
    {
        ch=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=ch;

    }
    printf("%s",a);
    

}