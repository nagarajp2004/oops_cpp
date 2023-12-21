#include<iostream>
using namespace std;
class shared{

int b;
public:
static int a;
void set(int i,int j){
    a=i;
    b=j;

}
void show(){
    cout <<"the static value is"<<a;

}
};
int shared::a;

int main(){
cout <<shared::a;
shared x,y;
x.set(2,4);
x.show();
shared::a=90;
x.show();

}