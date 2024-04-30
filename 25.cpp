#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> a)
{
    int num=0;
    for(int i=0;i<a.size();i++){
        num=num*10+a[i];
    }
   num=num+1;
   string x=to_string(num);
   int z=x.size();
   
   a.clear();
   for(int i=0;i<z;i++){
     a.push_back((x[i])-'0');
   }
   return a;
}
int main(){
    vector<int>a={9,9};
    a=addOneToNumber(a);
    for(auto i:a){
        cout<<i;
    }
}