#include<iostream>
using namespace std;
class loc{
int logi,lati;
public:
loc(){}
loc(int l,int la){
    logi=l;lati=la;    
}
void show(){
    cout<<logi<<" "<<lati;
}
loc operator+(loc);
loc operator=(loc);
loc operator++();
};
loc loc::operator+(loc ob1){
    loc temp;
    temp.lati=lati + ob1.lati;
    temp.logi=logi + ob1.logi;
    return temp;
}

loc loc::operator=(loc ob1){
    this->lati=ob1.lati;
    this->logi=ob1.logi;
    return *this;
}

 loc loc::operator ++(){
  lati++;
  logi++;
return *this;
 } 

 int  main(){
   loc a(10,20);
   a.show();
   loc b(10,20);
   loc c;
   c=a+b;
   c.show();
   c=a=b;
   c.show();
   a.show();
   c=++a;
c.show();


 }
