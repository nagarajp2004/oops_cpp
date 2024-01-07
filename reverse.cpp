#include<iostream>
using namespace std;
int main()
{
int n;
cin >>n;    
int *p=new int(n);
for(int i=0;i<n;i++){
    cin>>p[i];
}
for(int i=0,j=n-1;i<j;i++,j--)
{
    swap(p[i],p[j]);
}
for(int i=0;i<n;i++){
    cout <<p[i];
}

}