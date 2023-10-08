#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;
    int *p=0;
    //*p=&i;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl; //segmentation fault
   
cout<<"modifying the value"<<endl;
int num=5;
int a=num;
a++;
cout<<"num is:"<<num<<endl;
int *w=&num;
cout<<"before "<<num<<endl;
(*w)++;
cout<<"after "<<num<<endl;
cout<<"pointer copying "<<endl;
int *o=w;
cout<<w<<"-"<<o<<endl;
cout<<*w<<"-"<<*o<<endl;
//important concept----skipping the location by one step when you increment the pointer
int h=3;
int *u=&h;
cout<<(*u)++<<endl;
*u=*u+1;
cout<<*u<<endl;
cout<<"before u"<<u<<endl;
u=u+1;
cout<<"after u :"<<u<<endl;
 return 0;
}
/*output

0x7fffffffd0e0
5
0x7fffffffd0e0
5
modifying the value
num is:5
before 5
after 6
pointer copying 
0x7fffffffd0e4-0x7fffffffd0e4
6-6
3
5
before u0x7fffffffd0e8
after u :0x7fffffffd0ec
*/