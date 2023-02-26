#include<stdio.h>
struct employee 
{
 int id;
 char name[20];
 int salary;
};
int main()
{
    struct employee e; 
  printf("Enter the id, name ,salary\n");
  scanf("%d",&e.id);
  fflush(stdin);
  gets(e.name);
  scanf("%d",&e.salary);
  printf("id=%d  , name=%s  , salary  =%d",e.id,e.name,e.salary);
    return 0;
}
