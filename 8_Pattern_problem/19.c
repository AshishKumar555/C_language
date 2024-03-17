#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=19;j++){
            if((j>=2-i && j<=5+i)||(j>=14-i && j<=16+i)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=1;i++){
        for(int j=1;j<=12;j++){
            if(j==6){
                cout<<" Ashish ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=1;i<=9;i++){
        for(int j=1;j<=19;j++){
            if(j>=i+1 &&j<20-i){
               cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
