#include<iostream>
using namespace std;
class number{
    int val;
    public:
    number(int n){
        val=n;
    }
    
void display(){
    cout << "the value is\n";
    cout << val;
} 
number operator -(){
  this->val=-val;
  return (*this);
}
};
int main(){
    number n(20);
    n= -n;
     n.display();    

}
