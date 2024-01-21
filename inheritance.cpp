#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
   human(string n,int a){
        name=n;
        age=a;
    }
    void display(){
        cout << name<< age;
    }
    void work(){
        cout << "i work nothing";
    }
};
class student :public human{
    int roll;
    int fee;
    public:
    student(string n,int a,int r,int f):human ( n,a)
    {
        roll=r;
        fee=f;
    }
    // void display(){
    //     cout << name<<endl;
    //     cout << age<<endl;
    //     cout <<fee << endl;
    // }
};

int main(){
student a("nagaraj",19,77,99);
a.display();
}