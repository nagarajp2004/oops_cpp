#include<iostream>
using namespace std;
int main(){
    int a[4]={0,1,2,3};
    char s[]={"array out of bound"};
    try{
        for(int i=0;i<6;i++){
           if(i>=4){
            throw s;
           }
           cout<<a[i]<<endl;
        }

    }
    catch(char* s){
        cout<<"exception is handled"<<s<<endl;
    }
}