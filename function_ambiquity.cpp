#include<iostream>
using namespace std;
void fun(float a){
    cout<<"i am floating";
}
void fun(double){
    cout<< "iam double";
}
int main(){
    fun(float(10));
    fun(10.1);
}