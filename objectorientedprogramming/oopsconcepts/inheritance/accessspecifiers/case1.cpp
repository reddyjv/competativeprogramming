#include<iostream>
using namespace std;
class human{
    public:
    int age=10;
    int weight=20;
    int height=5;
                 //data members and functions are wrapped in class
    
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
class female:protected human{
    public:
    string color="red";
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

};
class other:private human{
    public:
    string color="red";
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

};
int main(){
    male a;
    cout<<"age is "<<a.age<<endl;   //public case is possible
    cout<<"weight is "<<a.weight<<endl;
    cout<<"height is "<<a.height<<endl;
    cout<<"color is "<<a.color<<endl;
   a.sleep();    //void functions cant be used in cout 
    cout<<endl;
     cout<<"object2"<<endl;
     female b;
 /*  cout<<"age is "<<b.age<<endl;   //protected  case is not possible to access 
    cout<<"weight is "<<b.weight<<endl;
    cout<<"height is "<<b.height<<endl; */
    cout<<"color is "<<b.color<<endl;
cout<<endl;
    cout<<"object 3"<<endl;
    other c;
     /*  cout<<"age is "<<c.age<<endl;   //private  case is not possible to access 
    cout<<"weight is "<<c.weight<<endl;
    cout<<"height is "<<c.height<<endl; */
    cout<<"color is "<<c.color<<endl;
          
    return 0;
}
/*output
age is 10
weight is 20
height is 5
color is red
male is sleeping

object2
color is red

object 3
color is red
*/