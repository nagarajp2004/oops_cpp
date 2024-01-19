#include<iostream>
using namespace std;
class human{
    public:
string name;
int age,weight;

};
class student:protected human{
int fee,roll_number;
public:
void set(string n,int a,int f){
    name=n;
    age=a;
    fee=f;
}


};
int main(){
 student s1;
s1.set("nagar",19,40404);                   
}