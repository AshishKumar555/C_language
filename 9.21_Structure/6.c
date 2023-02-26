#include<stdio.h>
#include<string.h>
struct employee 
{
 int id;
 char name[20];
 int salary;
};
int main()
{
    struct employee e[5],temp;
    int i,j;
    for(i=0;i<3;i++)
    { 
      printf("Enter the id\n");
      scanf("%d",&e[i].id);
      fflush(stdin);
      printf("Enter the name\n");
      fgets(e[i].name,20,stdin);
      printf("Enter the salary\n");
      scanf("%d",&e[i].salary); 
    }
  for(i=0;i<2;i++)
  {
    for(j=i+1;j<3;j++)
    {
        if(strcmp(e[i].name,e[j].name)>0)
         {
          temp=e[i];
           e[i]=e[j];
           e[j]=temp;
         }
    }
  }
      printf("id=%d : name=%s: salary  =%d\n",e[i].id,e[i].name,e[i].salary);
    
    return 0;
}