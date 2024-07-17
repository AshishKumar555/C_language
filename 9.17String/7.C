#include<stdio.h>
int main()
{
    int i,cntalp=0,cntdig=0,cntspc=0;
    char a[20];
    printf("enter the string\n");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            cntalp++;
        }
        if(a[i]>='0'&&a[i]<='9')
        {
            cntdig++;
        }
        else
        cntspc++;
        
    }
    printf("The total alphabetis==%d\n",cntalp);
        printf("total digit is ==%d\n",cntdig);
        printf("total special symbol==%d\n",cntspc);
    return 0;
}
