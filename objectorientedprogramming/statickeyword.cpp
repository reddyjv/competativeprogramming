//static datamember belongs to class but not to object
//object crreation is not needed to access ststic member
//initialization done out of class
//:: scope resolution operator
#include<iostream>
using namespace std;

class aravi{
    public:
    static int timecomplete;
    static int random(){
        return timecomplete;
    }

};
int aravi::timecomplete=10; //initialization
int main(){
    cout<<"timetocomplete is "<<aravi::timecomplete<<endl;
     aravi a;
     cout<<a.timecomplete<<endl;  //not recommendable
     cout<<endl;
     aravi b;
     b.timecomplete=20;
     cout<<a.timecomplete<<endl;
     cout<<b.timecomplete<<endl;

     cout<<aravi::random()<<endl;


}
//in static function object creation is not required and this keyword is not allowed
//static function sallow only static member
/*output
timetocomplete is 10
10

20
20
20
*/