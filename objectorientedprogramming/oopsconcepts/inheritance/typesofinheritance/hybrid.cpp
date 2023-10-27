#include<iostream>
using namespace std;
class A{
    public:
    int age=2;
    int height=4;
    int weight=9;
    void fun(){
        cout<<"India lifts the world cup"<<endl;
    }
};
class B:public A{   //single level inheritance
    public:
    int jersyno=7;
    void fun2(){
        cout<<"hello india"<<endl;
    }

};
class D{
    public:
    int flatno=7;
    void fun2(){
        cout<<"hello india"<<endl;
    }

};

class C:public D,public A{   //multiple inheritance
    public:
    int seatno=7;
    void fun2(){
        cout<<"hello india"<<endl;
    }

};
int main(){    //combination of two types  inheritances is called hybrid inheritance
    B b;
    cout<<"age is "<<b.age<<endl;
     cout<<"height is "<<b.height<<endl;
      cout<<"weight is "<<b.weight<<endl;
      cout<<"jersey number is "<<b.jersyno<<endl;

      cout<<endl;
      cout<<endl;
          C c;
    cout<<"age is "<<c.age<<endl;
     cout<<"height is "<<c.height<<endl;
      cout<<"weight is "<<c.weight<<endl;
     cout<<"flatnumber is "<<c.flatno<<endl;
      cout<<"seat number is "<<c.seatno<<endl;

}
/*output
age is 2
height is 4
weight is 9
jersey number is 7


age is 2
height is 4
weight is 9
flatnumber is 7
seat number is 7
*/