#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int** p2=&p;
    cout<<endl<<"sab sahi chal rahi hei"<<endl;
    cout<<"printing p ->"<<p<<endl;
    cout<<"address of p ->"<<&p<<endl;
    cout<<endl;
    cout<<"part A"<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<endl;
    cout<<"part B"<<endl;
    cout<<"&i->"<<&i<<endl;
    cout<<"p->"<<p<<endl;
    cout<<"*p2->"<<*p2<<endl;
    cout<<endl;
    cout<<"part c"<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;

    return 0;
}
/*output
sab sahi chal rahi hei
printing p ->0x7fffffffd0f4
address of p ->0x7fffffffd0f8

part A
5
5
5

part B
&i->0x7fffffffd0f4
p->0x7fffffffd0f4
*p2->0x7fffffffd0f4

part c
0x7fffffffd0f8
0x7fffffffd0f8
*/