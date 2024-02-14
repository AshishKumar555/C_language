// Print unit digit of a number 
#include <stdio.h>

int main() {
    int num=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    int unit=num%10;
    printf("Unit place is : %d ",unit);

    return 0;
}
