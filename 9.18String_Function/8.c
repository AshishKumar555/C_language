#include<stdio.h>
int main()
    {
        int i,cnt=0;
        char a[30];
        printf("Enter the string\n");
        fgets(a,30,stdin);
        for(i=0;a[i] !='\0';i++)
        {
            if(a[i]==' '&&a[i+1]!=' ')
            {
                cnt++;
            }
        }
        printf("The strings have %d words",cnt+1);
     return 0;
    }
