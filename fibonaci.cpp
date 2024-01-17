#include<iostream>
using namespace std;
int main()
{
int a[20];
int n;
cout << "enter to find nth fibonacci";
cin>>n;
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++){
 a[i]=a[i-1]+a[i-2];
}
cout << a[n-1];

}