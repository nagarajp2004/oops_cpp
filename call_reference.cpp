#include<iostream>
using namespace std;
void accept(int &a,int &b){
    cout<<"entr the value of a na d\n";
    cin>>a>>b;
}
void display(int &a ,int &b){
    cout<<a<<b;
}

int main(){
 int x,y;
 accept(x,y);
 display(x,y);
}