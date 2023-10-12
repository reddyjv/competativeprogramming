#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;

}
void update(int *p){
    //p=p+1;
    //cout<<"inside p"<<p<<endl;
    *p=*p+1;                //value can be updated

}
int main(){
    int value=5;
    int *p=&value;
    //print(p)
    cout<<"before"<<p<<endl;
    update(p);                //pass by value in this case
    cout<<"after"<<p<<endl; //no change after updating
    cout<<"updating value"<<endl;
    cout<<"before"<<*p<<endl;
    update(p);              
    cout<<"after"<<*p<<endl; //value can be updated
    return 0;
}
/*output
before0x7fffffffd0fc
after0x7fffffffd0fc
updating value
before6
after7
*/