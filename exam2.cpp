#include<iostream>
using namespace std;
class shared{
    static int a;
    public:
   shared(int x){
        a=x;
   }

     static void access(){
        cout<<"i am the static functuion\n";
       cout<<a;
     }
};
int shared::a;
int main(){
shared::access();
}