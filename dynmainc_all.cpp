#include<iostream>
using namespace std;
int main(){
    int *p=NULL,n;
    cout<<"enter the number of elements in the array\n";
    cin>>n;
    p=new int[n];
   cout<<"entr the n values";
   for(int i=0;i<n;i++){
    cin>>p[i];
   }
   cout<<"etnred values of array array are\n";
   for(int i=0;i<n;i++){
    cout<<p[i];
   }
    delete []p;
}