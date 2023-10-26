//class :act as template for object(user defined data type)
//object :instane of class(real time entity which will have properties of class )
#include<iostream>
using namespace std;
class hero{

};
class hero1{
    //initially class data members will be private
private: //only accessed in same class
int level;  //garbage value initiallized initially
public:
int health;


void print(){
    cout<<"hello aravind"<< endl;
}

int gethealth(){
    return health;
}
void sethealth(int h){
health=h;
}
};
int main(){
    //creation of object
    hero h1;
    cout<<"size "<<sizeof(h1)<<endl; //to keep track of that class 1 byte of memory will be given for identification
    hero1 h2;
     cout<<"size "<<sizeof(h2)<<endl;
     //cout<<h2.level<<endl;  // private cannot be accessed
    cout<<h2.health<<endl;      // . is used to access the member 

   cout<<"health of h1 is "<<h2.health<<endl;
   h2.sethealth(24);
   cout<<"health of h1 aftersetting is "<<h2.health<<endl;
    return 0;
}
//learn about padding and greedy alignment
/*output'
size 1
size 8
32767
health of h1 is32767
health of h1 aftersetting is 24

*/

