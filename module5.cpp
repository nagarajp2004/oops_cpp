#include<iostream>
#include<iomanip>
using namespace std;
class b{

};
class d :public b{

};

int main(){
   b a;
   try{
    d x;
    throw x;
   }
      catch(d &c){
    cout<<"iiiy";
   }
   catch(b &s){
    cout<<"base";
   }

    }
    


