#include<iostream>
using namespace std;
class number
{
int a;
public:
number(){}
number(int val){
    a=val;
}
friend number operator+(number,number);
};
number operator+(number ob1,number ob2){
  number temp;
  temp.a=ob1.a+ob2.a;
  return temp;
}

