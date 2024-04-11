////static data memeber
#include<iostream>
using namespace std;
class shared{
  static int a ;
  int k;
  public:
  void set(int x,int y){
      a=x;
      k=y;
  }
  void display(){
     cout<< "the static meber is"<<a<<endl;
  }
};
int shared::a;///////////////////////////////////imp;
int main(){
    shared z;
    z.set(20,30);
    z.display();
}