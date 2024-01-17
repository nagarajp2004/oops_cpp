#include<iostream>
using namespace std;
int main(){
    int arr[20]={7,8,56,5,7,4};
    int n=6,index;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
             index=i+1;
             if(arr[index]>arr[j])
                   index=j;
        }
       swap(arr[index],arr[i]);
          

    }
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}