#include<stdio.h>
#include<string.h>
int main()
{
    int i,w1=-1,w2=-1,min=10000;
    char words[4][20];
    printf("enter the string\n");
    for(i=0;i<4;i++)
    gets(words[i]);
    char word1[]="my";
    char word2[]="ashish";
    
    for(i=0;i<4;i++)
    {
        if(strcmp(words[i],word1)==0)
        w1=i;
        if(strcmp(words[i],word2)==0)
        w2=i;
        if(w1 !=-1&&w2!=-1)
        min=abs(w2-w1);
    }
    printf("%d",min-1);
    return 0;
}