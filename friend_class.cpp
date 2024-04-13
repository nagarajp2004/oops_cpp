#include<iostream>
using namespace std;
class two_valu{
 int a,b;
 public:
 void accept(){
    cout<<"enter the value of and b\n";
    cin>>a>>b;
 }
 friend class minw;
};

class minw{
    public:
    void prints(two_valu x);
};
void minw::prints(two_valu x){
   cout<<x.a<<"\n"<<x.b;
}
int main(){
    two_valu x;
    x.accept();
    minw y;
    y.prints(x);
}
