#include<stdio.h>

struct employee 
{
 int id;
 char name[20];
 int salary;
};
int main()
{
    int i;
    struct employee e[10];
    for(i=0;i<10;i++)
    { 
  printf("Enter the id, name ,salary\n");
  scanf("%d",&e[i].id);
  fflush(stdin);
  gets(e[i].name);
  scanf("%d",&e[i].salary);

    }
    for(i=0;i<10;i++)
     printf("id=%d : name=%s: salary  =%d\n",e[i].id,e[i].name,e[i].salary);
    
    return 0;
}
