//inherits the properties of the parent class or code reusability
#include<iostream>
using namespace std;
class human{
    public:
    int age=10;
    int weight=20;
    int height=5;
                 //data members and functions are wrapped in class
    public:
    int getage(){
        return this->age;
    }
};
class male:public human{
    public:
    string color="red";
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

};
int main(){
    male a;
    cout<<"age is "<<a.age<<endl;
    cout<<"weight is "<<a.weight<<endl;
    cout<<"height is "<<a.height<<endl;
    cout<<"color is "<<a.color<<endl;
   a.sleep();        //void functions cant be used in cout 
    return 0;
}
/* output
age is 10
weight is 20
height is 5
color is red
male is sleeping
*/