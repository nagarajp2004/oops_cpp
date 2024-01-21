#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    person(string n,int a){
        name=n;
        age=a;
    }
    void introduce(){
        cout<< "HELLO MY NAME IS"<< name;
    }

};
class employ:public person
{
protected:
int salary;
public:
employ(int s,string n,int a):person(n,a){
 salary=s;
}
void monthlysalary(){
    cout << "my salary is"<<salary;
}
};
class manger:public employ
{
public:
string dept;
manger(string dept,int s,string n,int a):employ(s,n,a){
    this->dept=dept;
}
void display(){
    cout<< name<<" "<<age<<" "<< salary<<" "<<dept<<endl;
}
};

int main(){

manger a("cse",900000,"nagaraj p",19);
a.display();
}