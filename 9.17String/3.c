#include<stdio.h>
int main()
{
    int i,cnt=0;
    char a[10];
    printf("enter the element\n");
    fgets(a,10,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}