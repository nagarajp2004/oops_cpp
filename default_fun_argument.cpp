#include<iostream>
using namespace std;
int k=10;
int fun(){
    return 100;
}
void number(int=k ,int=10,int=fun());
int main(){
    number( );
}
void number(int a,int b,int c){
    cout<< a<<endl;
    cout<< b<<endl;
    cout<< c<<endl;
}
