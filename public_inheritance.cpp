#include<iostream>
using namespace std;
class base {
int x,y;
public:
void set(int a,int b){
    x=a;
    y=b;
}
void show(){
    cout<< x<<y;
}
};
class derived:public base{
    int k;
    public:
    void setk(int a,int b,int c){
        k=a;
        set(b,c);
    }
    void showll(){
        cout<<k;
        show();
    }

};
int main(){
    derived a;
    a.setk(2,3,4); 
    a.showll();
    
}
