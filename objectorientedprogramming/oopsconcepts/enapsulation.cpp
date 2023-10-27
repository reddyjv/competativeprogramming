//encapsulation is wrapping data members and functions
#include<iostream>
using namespace std;
class aravi{
    private:
    string name;
    int age;
    int height;
                 //data members and functions are wrapped in class
    public:
    int getage(){
        return this->age;
    }
};
int main(){
    aravi a;
    cout<<"everything is fine"<<endl;
    return 0;
}
/*output
everything is fine
*/