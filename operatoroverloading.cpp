#include<iostream>
using namespace std;
class number{
    int val;
    public:
    number(){}
    number(int n){
        val=n;
    }
    
void display(){
    cout << "the value is\n";
    cout << val;
} 
number operator +(int a){
  number temp;
  temp.val=val+a;
  return temp;
}
};
int main(){
    number n(20),n2(20),n3;
     n3=n+100;
     n3.display();    

}
