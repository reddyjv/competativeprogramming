#include<iostream>
using namespace std;
class A{
    public:
    int age=2;
    int height=4;
    int weight=9;
    string food(){
        return  "masala dosa";
    }
};
class B{
    public:
    int jersyno=7;
    string food(){
        return "biryani";
    }

};
class C:public B,public A{
    public:
    int seatno=7;
    void fun(){
        cout<<"hello india"<<endl;
    }

};
int main(){
   //object creation
          C c;
    cout<<"age is "<<c.age<<endl;
     cout<<"height is "<<c.height<<endl;
      cout<<"weight is "<<c.weight<<endl;
      cout<<"jersey number is "<<c.jersyno<<endl;
      cout<<"seat number is "<<c.seatno<<endl;

      //solving same function name problem
      cout<<"food of parent A is "<<c.A::food()<<endl;
      cout<<"food of parent B is "<<c.B::food()<<endl;
      

}
/*output
age is 2
height is 4
weight is 9
jersey number is 7
seat number is 7
food of parent A is masala dosa
food of parent B is biryani
*/