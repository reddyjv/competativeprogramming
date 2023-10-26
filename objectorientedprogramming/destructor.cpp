//destructor
//no input parameter
//no return type
//~ is difference
#include<iostream>
using namespace std;
class aravi{
    public:
    aravi(){
        cout<<"constructor is called"<<endl;
    }
     ~aravi(){
           cout<<"destructor is called"<<endl;
     }
};
int main(){
    //static
    aravi a;
    //dynamic
    aravi *b=new aravi();
    //manually destructor call
    delete b;
    return 0;

}
//for statically created object automatically destructor is called 
//for dynamically created object manually destructor is called 
//learn about const keyword in creating functions ,object creation,data members,initialising list

/*output
constructor is called
constructor is called
destructor is called
destructor is called
*/