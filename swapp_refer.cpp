#include<iostream>
using namespace std;
void swap(int& a,int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int c=10;
    int d=90;
    cout << "bef"<<c<<"and"<<d<<'\n';
    swap(c,d);
    cout << "aef"<<c<<"and"<<d<<'\n';

}