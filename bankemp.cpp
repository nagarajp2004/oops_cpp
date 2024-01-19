#include<iostream>
using namespace std;
class bankemp{
private:
string name;
int acc;
double bal;
public:
bankemp(string n,int a,double b){
    name=n;
    acc=a;
    bal=b;
}
void display(){
     cout <<"name :"<<name;
     cout <<"account:"<<acc;
     cout << "balance"<<bal;  
    if(bal<500){
        cout << ("invalid balance"); }
}
void withdraw(double amount){
    bal-=amount;
  if(bal<500){
   cout << ("invalid balance");
}
  cout << "withdraw";
} 
 void deposit(double amount){
    bal +=amount;
    cout<< "sucessfull deposit ";
 }
};
int main()
{
    int amt,ch;
bankemp nag("nagaraj",455643,9000);
while(1){
    cout << "1 to withdraw";
    cout <<"2 to deposit";
    cout << "3 display";
    cout << "4 exit";
cin >>ch;
switch(ch){
    case 1:
    cout <<"enter the amt";
    cin >>amt;
    nag.withdraw(amt);
    break;
    case 2:
    cout <<"enter the amt";
    cin >> amt;
    nag.deposit(amt);
    break;
    case 3:
    nag.display();
    break;
    case 4:
    exit(1); }}}