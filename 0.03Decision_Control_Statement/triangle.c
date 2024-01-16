#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter side of triangle\n");

    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && z+x>y)
    printf("valid triangle");
    else
    printf(" It is not valid triangle");

    return 0;
}
