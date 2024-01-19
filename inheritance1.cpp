#include<iostream>
using namespace std;
//checking the accesibility 1, in main function 2, in same class 3, in derivwed class
class base{
  private:
  int b;
  protected:
  int c;
  public:
  int d;
 void fun(){
    b=10;
    c=20;
    d=30;
 }
};
int main(){
    base x;
    x.d=20;
    x.fun();
}