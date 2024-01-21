#include<iostream>
using namespace std;
class date{
    int d,m,y;
    public:
    date( const char* s){
        sscanf(s,"%d%*c%d%*c%d",&d,&m,&y);
    }
    date(int d,int m,int y){
        this->d=d;
        this->m=m;
        this->y=y;
    }
      void display(); 
};
void date::display(){
    cout<< d<<'/'<<m<<'/'<<y;
}
int main(){
    date a("22/04/24");
    date b(22,5,24);
    a.display();
    b.display();
}