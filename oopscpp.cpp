#include<iostream>
#include<iomanip>
using namespace std;
class x{
    int a;
    public:
     void set(int z){
        a=z;
        
     }
     friend void display(x &);
  
};
void display(x& y){
 cout<<"the valu eis "<<y.a;
}
int main(){
    x w;
    w.set(30);
    display(w);
}