#include<stdio.h>
struct Marks
{
  int rollno;
  char name[30];
  float chemist_marks,math_marks,phy_marks;
};
int main()
{
    int i;
    struct  Marks marks[5];
    for(i=0;i<5;i++)
    {
    printf("Enter marks in chemist\n");
    scanf("%d",&marks.chemist);
   printf("Enter marks in maths\n");
    scanf("%d",&marks.math);
   printf("Enter marks in phy\n");
    scanf("%d",&marks.phys);
    }
    return 0;
}