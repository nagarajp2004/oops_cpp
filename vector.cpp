#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>p){
    for(int i=0;i<p.size();i++){
        cout << p[i]<<endl;
    }
}
void display_auto(vector<int>p){
    for(auto i=p.begin();i!=p.end();i++){
        cout << *i<<endl;
    }
}

void display_reverse(vector<int>p){
    for(auto i=p.rbegin();i!=p.rend();--i){
        cout << *i<<endl;
    }
}
int main(){
//     //create and declare 
//     vector<int>v;
//     // size and capacity
// cout << v.size()<<endl<<v.capacity();
// //insert 
// cout <<endl;
// v.push_back(20);


// //size and capacity
// cout << v.size()<<endl<<v.capacity();

// v.push_back(45);
// v.push_back(54);
// cout <<endl;
// cout << v.size()<<endl<<v.capacity()<<endl;
// //update 
// v[1]=5;
// // declaration intialization 
// vector<int>p(10,0);
// p.push_back(778);
// cout<< "after";
// cout <<'\n'<< p.size()<<endl<<p.capacity();
//vector<int>v3={1,2,3,4,5,6,7,8,9};


//cout<<v3.size()<<'\n'<<v3.capacity()<<endl;
//display(v3);
//to remove 2 //here 2 is in 1 index so 1
//v3.erase(v3.begin()+1);
//display(v3);
//to insert the element in the speciic index
//v3.insert(v3.begin()+1,99);
//display(v3); 
//to clear all the element 
//v3.clear();
//display(v3);
vector<int>p;
p.push_back(78);
p.push_back(546);
p.push_back(77);
p.push_back(88);
//display_auto(p);
//cout <<"\n*************************************************************************************\n";
//for(int i:p){
  //  cout << i<<"  ";
//sort
//ascending problem in compilar
//sort(p.begin(),p.end());
//in decending order
//sort(p.rbegin(),p.rend());
//cout <<binary_search(p.begin(),p.end(),77);
//return 1 or 0 3 argument is element to search;
// sort(p.begin(),p.end());

// display(p);
// cout << endl;
// sort(p.rbegin(),p.rend());
// display(p);
//int a=count(p.begin(),p.end(),77);
//cout <<a;
//auto b=max_element(p.begin(),p.end());
//cout <<*b;





}

