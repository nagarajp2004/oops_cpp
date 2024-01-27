#include<iostream>
using namespace std;
class base {
    public:
    int j;

};
class derived:private base{
    public:
   using base::j;
    void show(){
        cout<< "hi";
    }
};
int main(){
derived a;
a.j=10;      
}
