#include<stdio.h>
#include<string.h>
// -----Two Pointer Approach is best --------------------!

int length(char str[]){
    int length=0;
    for(int i=0;i<=str[i];i++){
       length++;
       
    }
    return length-1; 
}
void reverse(char str[]){
    int start=0;
    int count=length(str);
    int end=count-1;
    while(start<end){

        char temp;
        temp=str[end];
        str[end]=str[start];
        str[start]=temp;

        start++;
        end--;
    }
}
//-----------------------------------------------------!
int main()
{

    char a[10],ch;
    printf("enter the strings\n");
    fgets(a,10,stdin);
    int l,i;
    for(l=0;a[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=ch;

    }
    
    printf("%s\n",a);

    return 0;
}
