#include<iostream>
using namespace std;
// passing the obl;ect
// class x{
//    int a;
//    public:
//    void accept(){
//     cin>>a;
//    }
//    void display_2(x &y){
//     cout<<a<<"passed values is"<<y.a;
//    }
// };
// int main(){
//     x z;
//     x c;
//     z.accept();
//     c.accept();
//     z.display_2(c);
// }
////////returning the object
class student{
  int mark1;
  int mark2;
  public:
  void accept(){
    cin>>mark1>>mark2;
  } 
  void show(){
    cout<<mark1<<mark2;
  }
};

student create_stuidents(){
    student s1;
    s1.accept();
    s1.show();
    return s1;
}
int main(){
    student s2=create_stuidents();
}