#include<iostream>
using namespace std;
void* operator new(size_t size){
    void*p;
    cout<<"the memory is created ";
    p=malloc(size);
    return p;
}
void operator delete(void* p){
    cout<< "the memory is free";
    free(p);
}

class number{
 int val;
 public:
 void show(){
    cout<<"valaue"<<val;
 }
 number(){cout<< "i love c++\n"<<endl;}
 number(int a){
   val=a;
 }
};
int main(){
    int *p;
    p=new int(10);
    // delete(p);
    cout<<*p;
    number*q;
    q=new number;
}

