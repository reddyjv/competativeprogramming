#include<iostream>
using namespace std;
//constructor:object creation time it invokes
//it has no return type
//no input parameter

//when constructor created manually then default constructor dies
//this keyword contains current object address
class hero{
    public:
   hero(){
    cout<<"hello motto called constructor"<<endl;
   }
   int health;
   hero(int health){
    cout<<this<<endl;
    this->health=health;
   }
   int gethealth(){
    return health;
   }
   void print(){
    cout<<"namste"<<endl;
   }
};
int main(){
    cout<<"hello world"<<endl;
    //object creating statically
    hero aravi;
    cout<<"hello universe"<<endl;
    cout<<endl;
    //dynamically
    hero *b=new hero;

cout<<endl;
    cout<<"about this"<<endl;
    hero karthi(10);
    cout<<"address of karthi is "<<&karthi<<endl;
    cout<<"health is "<<karthi.gethealth()<<endl;

    //dynamically
 hero *h=new hero(11);
 h->print();
 /*output
 hello world
hello motto called constructor
hello universe

hello motto called constructor

about this
0x7fffffffd084
address of karthi is 0x7fffffffd084
health is 10
0x55555556b2e0
namste*/



}