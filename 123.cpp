#include<iostream>
using namespace std;
class num{
    int x;
    static int y;
    public:
     num(){
        y++;
     }
     void display(){
        cout<<y;
     }
};
int num::y;
int main(){
    num x,y,z;
    y.display();
}