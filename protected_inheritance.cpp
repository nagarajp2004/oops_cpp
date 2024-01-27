#include<iostream>
using namespace std;
class base{
    protected:
    int x,y;
    public:
    void set(int a,int b){
        x=a;
        y=b;
    }
};
class derived: protected base{
 protected:
 int z;
 public:
 void setall(int a,int b,int c){
      set(a,b);
      z=c;
 }
};
int main(){
    derived a;
   a.setall(2,34,6);
}
