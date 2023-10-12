//macro is piece of code in a program that is replaced by value of a macro(no extra space is required)
#include<iostream>
using namespace std;
float pi=3.14;           //global variable 
#define PI 3.14           //macros 
int main(){
    int r=5;
double area=PI*r*r;//before compilation value loads the  in places of PI 
//PI=PI+1;      //cannot be changed
cout<<"area is "<<area<<endl;
pi=pi+1;
cout<<"modified value is"<<pi<<endl;
return 0;
}
/*global variable acccessd by all functions but not recommended because it can be modified
  Use reference variable to share variables
  macros (accessed by any function and cannot be changed)(storage won't be used)
*/
/* output
area is 78.5
modified value is4.14
*/