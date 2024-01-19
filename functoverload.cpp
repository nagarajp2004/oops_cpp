#include<iostream>
using namespace std;
void add(int a ,int b){
     cout << "the integer addition is \n"<<a+b;
}
void add(double a ,double b){
    cout << "double addition is\n"<<a+b;
}
void accept(int& a,int& b){
    cout << "intger acept";
    cin >>a >> b;
}
void accept(double& a, double& b){
    cout <<"the double";
    cin>>a>>b;
}
int main(){
    int a,b;
    double c,d;
    accept(a,b);
    accept(c,d);
    add(a,b);
    add(c,d);
}