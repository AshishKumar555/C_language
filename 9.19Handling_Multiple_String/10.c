#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=0;
    char a[3][2][20];
    printf("Enter username && password\n");
    for(i=0;i<3;i++)
    for(j=0;j<2;j++)
    gets(a[i][j]);
    char username[]="prateek";
    char password[]="123";
    for(i=0;i<3;i++)
    {
        if(strcmp(username,a[i][0])==0 && strcmp(password,a[i][1])==0)
        {
            printf("login successful\n");
            flag=1;
    
        }
    }
    if(flag==0)
    printf("Username or password not matched\n");
    
    return 0;
}