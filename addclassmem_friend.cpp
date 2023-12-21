#include<iostream>
class b;
using namespace std;
class a{
int num1;
public:
 a(int k){
    num1=k;
 }
 friend int add(a&,b&); 
};
class b{
int num2;
public:
 b(int h){
    num2=h;
 }
 friend int add(a&,b&);
};
int add(a& q,b& w){

    return q.num1+w.num2;

}
int main(){
    a q(10);
    b w(78);
    cout << "sum"<<add(q,w);
}