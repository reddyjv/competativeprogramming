#include<iostream>
using namespace std;
void update(int **p2){
    //p2=p2+1;
    //no modification
    
    *p2=*p2+1;
    //mmodification is done

    //**p2=**p2+1;
    //modifucations are posiible
}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"before"<<endl;
    cout<<p2<<endl;
    cout<<"after"<<endl;
    update(p2);
    cout<<p2<<endl;

}
//pending
/* output
case 1:
before
0x7fffffffd0f8
after
0x7fffffffd0f8

case2:
*/