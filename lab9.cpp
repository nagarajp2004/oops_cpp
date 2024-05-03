#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream fh;
    char str[200];
    fh.open("fifo.txt",ios::out);
    if(!fh.is_open()){
        cout<<"file did not open";
        exit(0);
    }
    
    fh<<"this is sample text file\n";
    fh<<"this second line of the file\n";
    fh.close();
    fh.open("fifo.txt",ios::in);
    fh.getline(str,90,'\n');
    cout<<str<<endl;
    fh.getline(str,90,'\n');
    cout<<str<<endl;
    fh.close();
    cout<<"hi";
    return 0;
}