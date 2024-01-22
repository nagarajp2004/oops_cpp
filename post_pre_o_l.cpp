#include<iostream>
using namespace std;
class number{
    int val;
    public:
    number(){}
    number(int n){
        val=n;
        }
number operator++(int x){
     val=val++;
     return *this;
     }
number operator++(){
    val=++val;
    return *this;
}
void show(){
    cout << val;
}
 };
int main(){
 number a(10);
 a.show();
 
 a=a++;
 a=a++;
 a.show();

}