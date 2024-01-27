#include<iostream>
using namespace std;
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
void* operator new(size_t size);
void operator delete(void*);
};
void* number::operator new(size_t size){
    void *a;
    cout<< "the memory is allocated";
    a=malloc(size);
    return a;
}

 void number::operator delete(void* p){
 free(p);
 } 
int main(){
    number* b;
    b=new number; 
    b->show();

}

 
