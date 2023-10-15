#include<iostream>
using namespace std;
int main(){
    int arr[]={11,21,13,14};
    //int *ptr=arr++; //array address can't be modified but pointer can be done
    int *ptr=arr;
    ptr=ptr+1;
    cout<<*ptr<<endl;
    return 0;
}
/*output
21
*/