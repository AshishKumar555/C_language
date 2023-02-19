#include<stdio.h>
#include<conio.h>
float area(float r);

int main(){
    float s,p;
    printf("Enter  the value of p\n");
    scanf("%f",&p); 
    s=area(p); 
    printf("%f",s);
    return 0;
}
float area(float r){
    float A;
    A=3.14*r*r;
    return A;
    }