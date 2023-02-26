#include<stdio.h>
int main()
{
    char b,s[10];
    int i,cnt=0;
    printf("enter the element\n");
    fgets(s,10,stdin);
    printf("enter any character\n");
    scanf("%c",&b);
   
    for(i=0;s[i];i++)
    {
        if(s[i]==b)
        {
            cnt++;
        }
         
    }
    printf("%d",cnt);
    
    return 0;
    
 /*  int i=0,cnt=0;
   char a[]="PRATEEK";
   while(a[i] !='\0')
   {
    i++;
    cnt++;
   }
   printf("%d",cnt);
*/
}