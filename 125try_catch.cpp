#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"enter the age";
  try{
   cin>>age;
  if(age>17){
    cout<<"good";
  }
  else{
    throw(age);
  }
  }
  catch(int age){
    cout<<"ur age is less plz act matucre";
  }

}
