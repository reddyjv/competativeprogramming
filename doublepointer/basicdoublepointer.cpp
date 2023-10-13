//int value=5;
//int* ptr=&value;
//we should know what type of datatype and number of bytes to be considered
//->doublee pointer is used to store of address of another pointer
//int** ptr2=&ptr;
#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int** p2=&p;
    cout<<endl<<"sab sahi chal rahi hei"<<endl;
    cout<<"printing p ->"<<p<<endl;
    cout<<"address of p ->"<<&p<<endl;
    return 0;
}
/*output
sab sahi chal rahi hei
printing p ->0x7fffffffd0f4
address of p ->0x7fffffffd0f8
*/