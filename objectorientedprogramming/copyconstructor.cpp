#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    char name[100];
   //hero(){
  //  cout<<"hello motto called constructor"<<endl;
  // }
   //copy constructor
  // hero(hero& temp){   //& is used escape from infinite looping by calling default constructor again and again
 //   cout<<"copy constructor called"<<endl;
 //   this->health=temp.health;
 //   cout<<"this->health"<<this->health<<endl;
 //  }
   int health;
   hero(int health){
    cout<<this<<endl;
    this->health=health;
   }
   void sethealth(int h){
    this->health=h;
   }
      void setlevel(char h){
    this->level=h;
   }
   int gethealth(){
    return health;
   }
   char getlevel(){
    return level;
   }
   void print(){
    cout<<"name is "<<this->name<<endl;
    cout<<"health is "<<this->health<<endl;
    cout<<"level is "<<this->level<<endl; 
   }
};
int main(){
    hero s(10);
    s.print();
    //copy constructor
    hero r(s);
    r.print();
    return 0;

    //shallow copy concept
    hero h1;
    h1.sethealth(22);
    h1.setlevel("a");
    char name[8]="aravi";
    h1.print();

}