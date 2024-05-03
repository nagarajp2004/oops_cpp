#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
#include <bits/stdc++.h> 
class Node
 {
 public:
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 };
Node* constructDLL(vector<int>& arr) {
    
    Node* temp,head,cur;
    for (int i = 0; i < arr.size(); i++) {
      temp = new Node(arr[i]);
      if(head==nullptr)
       {
           head=temp;
           cur=temp;
       }
       else{
           cur->next=temp;
           temp->prev=cur;
           cur=temp;
       }
    }
    return head;
}