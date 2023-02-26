#include<stdio.h>
#include<string.h>
int main()
{
  int i,j;
  char a[3][20];
  printf("enter the three Email\n");
  for(i=0;i<3;i++)
  gets(a[i]);
  printf("the odd email\n");
  for(i=0;i<3;i++)
  {
    if(strchr(a[i],'@') !=0)
    {
        
        printf("%s\n",a[i]);
    }
  }
  return 0;
}