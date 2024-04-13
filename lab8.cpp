#include<iostream>
using namespace std;
class base1{
    int alpha;
    char beta;
    float gamma;
    public:
    base1(int a,char b,float c){
         alpha=a;
         beta=b;
         gamma=c;
         cout<<"the base class constructor\n";
    }
    void display(){
        cout<<"alpha="<<alpha<<endl;
        cout<<"beta="<<beta<<endl;
        cout<<"gamma="<<gamma<<endl;
    }
};
 class derived: public base1{
    public:
    derived(int a,char b,float c):base1(a,b,c)
    {
       cout<<"the derived class constructor \n";
    }
 };
 int main(){
    derived a(2,'a',2.22);
     a.display();
 }