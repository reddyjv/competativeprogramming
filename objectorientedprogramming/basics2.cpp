#include<iostream>
using namespace std;
class hero{
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
    //static allocation
    hero a;
    cout<<"health is"<<a.health<<endl;
    a.sethealth(13);
    cout<<"health is"<<a.gethealth()<<endl;

    //dynamically
    hero *b=new hero;
    cout<<"health is "<<(*b).health<<endl;
    cout<<"health is ->"<<(*b).gethealth()<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"health is"<<b->health<<endl;
     cout<<" health is"<<b->gethealth()<<endl;
    
}
/*output
health is0
health is13
health is 0
health is ->0


health is0
 health is0
 */