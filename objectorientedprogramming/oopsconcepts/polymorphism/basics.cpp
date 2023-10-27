/* ->polymorphism refers many forms
->such as different function with same name
->two types of polymorphism
   compile time polymorphism  (static)
   Run time polymorphism     (dynamic)
*/



#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello user"<<endl; //function overloading (different functions same name)
    }
    int sayhello(string name){   //function parameters should be different and doesn't depends on return type
        cout<<"hello "<<name<<endl;
        return 1;
    }
    void sayhello(int a){
        cout<<"hello "<<a<<endl;
    }
    void sayhello(string name,int age=10,int height=5){
        cout<<"hello "<<name<<endl;
        cout<<"your age is "<<age<<endl;
        cout<<"hello "<<height<<endl;
    }
};
int main(){
    A a;
    a.sayhello();
    a.sayhello("aravind",3,5);
    a.sayhello("motto",4);
    a.sayhello(3);
    return 0;
}
/*output


hello user
hello aravind
your age is 3
hello 5
hello motto
your age is 4
hello 5
hello 3
*/