#include<stdio.h>//without function count frequency:
int main()
{
    int i,frq[150]={0};
    char a[20];
    printf("enter the strings\n");
    gets(a);
    for(i=0;a[i];i++)
    {
        frq[a[i]]++;
    }
    
    printf("the frequency of the given no\n");
    for(i=0;i<150;i++)
    {
        if(frq[i] !=0)
        {
            printf("%c ==>%d\n",i,frq[i]);
        }
    }
    return 0;
}