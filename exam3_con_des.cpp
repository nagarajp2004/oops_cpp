#include<iostream>
using namespace std;
class x{
 int a;
 public:
 x(int a){
    cout<<"the constuctor is called";
    this->a=a;
 }

 ~x(){
    cout<<"the destrcutor is called\n";
 }
 
};
int main(){
    x s(10);


}