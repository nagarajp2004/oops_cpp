#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<" base is constructing";
    }
    ~base(){
        cout<< "base is disstucti g";
    }
};
class base2{
    public:
base2(){
    cout<< "ia m base2 ";
}
~base2(){
    cout<<" ia m base2";
}
};

class derived:public base,public base2{
public:
derived(){
    cout<< "i am construcing";
}                            
~derived(){
    cout<< "derived is destrucing";                
}


};

int main(){
    derived a;                                                                                                                                                                                                                                                                                                           
}