#include<iostream>
#include<string.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    char *name;
   hero(){
    cout<<"hello motto called constructor"<<endl;
    name=new char[100];
   }
   //copy constructor
   hero(hero& temp){   //& is used escape from infinite looping by calling default constructor again and again
    char *ch=new char[strlen(temp.name)+1];//for deep copy
    strcpy(ch,temp.name);
    this->name=ch;
    cout<<"copy constructor called"<<endl;
    cout<<"copy constructor called"<<endl;
    this->health=temp.health;
    cout<<"this->health"<<this->health<<endl;
   }
   
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
   void setname(char name[]){
    strcpy(this->name,name);
   }
};
int main(){
    hero s(10);
    s.print();
    //copy constructor
    hero r(s);
    r.print();
    cout<<endl;
    cout<<endl;
    
cout<<"shallow copy concept"<<endl;
    //shallow copy concept
    hero h1;
    h1.sethealth(22);
    h1.setlevel('a');
    char name[8]="aravind";
    h1.setname(name);
    h1.print();

    //use default constructor

    hero h2(h1);
   h2.print();

   h1.name[0]='d';
   h1.print();
   h2.print();
return 0;


}
//in shallow copy same memory is accessed by both objects
//in deep copy different memory location

/*output
remove copy constructor before shallow case

level is �


shallow copy concept
hello motto called constructor
name is aravind
health is 22
level is a
name is aravind
health is 22
level is a
name is dravind
health is 22
level is a
name is dravind
health is 22
level is a
*/

/*output
deep copy concept

hello motto called constructor
name is aravind
health is 22
level is a
copy constructor called
copy constructor called
this->health22
name is aravind
health is 22
level is 
name is dravind
health is 22
level is a
name is aravind
health is 22
*/