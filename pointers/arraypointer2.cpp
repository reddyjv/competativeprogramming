#include<iostream>
using namespace std;
int main(){
    int a[20]={1,2,3,4};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    int *p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;
    //a=a+1               gives error
    int *ptr=&a[0];
    cout<<ptr<<endl;
    ptr=ptr+1;             //ptr can be shifted
    cout<<ptr<<endl;
    return 0;


}
/*output
->0x7fffffffd0c0
0x7fffffffd0c0
0x7fffffffd0c0
0x7fffffffd0c0
1
->0x7fffffffd0b0
0x7fffffffd0c0
0x7fffffffd0c4
*/