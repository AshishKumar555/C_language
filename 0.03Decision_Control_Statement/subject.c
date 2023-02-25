#include<stdio.h>
#include<conio.h>
int main()
{  //five subject marks pass or fail:
    int math,science,english,gk,evs;
    printf("Enter the five subject marks\n");
    scanf("%d%d%d%d%d",&math,&science,&english,&gk,&evs);
    if(math>32&&science>32&&english>32&&gk>32&&evs>32)
    printf("Pass");
    else
    printf("Fail");
    return 0;
}
