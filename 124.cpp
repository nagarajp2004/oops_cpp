#include<iostream>
using namespace std;
class num{
    static int x;
    public:
    static void access(){
        cout<<x;
    }
};
int num::x;
int main()
{
    num::access( );
}