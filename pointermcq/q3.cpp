#include<iostream>
using namespace std;
int main(){
    int *p=0;  //segmentation fault will occur
    int first=110;
    *p=first;
    cout<<*p<<endl;
    return 0;
    }