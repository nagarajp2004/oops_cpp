#include<iostream>
using namespace std;
// class num{
//  public:
//  int a,b;
//  num(int x,int y){
//     cout<<("i am called");
//     a=x;
//     b=y;
//  }

// };
// int main(){
//     int a=1,b=20;
//     num n(a,b);
//     num n1=n;
//     cout<<&(n1.a)<<"\n"<<&(n.a);
//     cout<<"hi i am fire\n";

    
// }
class num{
    int a;
    public:

    num(int x){
        a=x;
    }

    num(num &x ){
        a=x.a;
    }
    void display();
    
};
 void num::display(){
    cout<<a;
 }
 int main(){
    int k=10;
    num y(k);
    num z(y);
    z.display();
 }

