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
class B:public A{
    public:
    int jersyno=7;
    void fun2(){
        cout<<"hello india"<<endl;
    }

};
int main(){
    B b;
    cout<<"age is "<<b.age<<endl;
     cout<<"height is "<<b.height<<endl;
      cout<<"weight is "<<b.weight<<endl;
      cout<<"jersey number is "<<b.jersyno<<endl;
}
/*output
age is 2
height is 4
weight is 9
jersey number is 7
*/