#include<stdio.h>
#include<iostream>
using namespace std;
int alphanumeric(char s[20]);
int main()
{
    int i;
    char s[20];
    printf("enter the no of string\n");
    fgets(s,20,stdin);
   
    if(alphanumeric(s)){
        cout<<"The string is Alphanumeric :"<<endl;
    }
    else{
        cout<<"The string is not Alphanumeric "<<endl;
    }
    return 0;
}
int alphanumeric(char s[20])
{
    int i,vowel=0,digit=0;
    for(i=0;s[i];i++)
    {
    if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))        
        vowel++;    
    else if( s[i]>='0' && s[i]<='9' )
        digit++;
    }
     cout<<vowel<<' '<<digit<<" ";
    if(vowel >=1 && digit >=1){
        return 1;
    }
    else{
        return 0;
    }
}
