#include<iostream>
using namespace std;
void print(int arr[],int n,int start=1,string a="arvind"){ //default arguments should always be in right side
    for(int i=start;i<n;i++){//default arguments will take values if provided
        cout<<arr[i]<<endl;  // otherwise continues with initialized value

    }
    cout<<"string is "<<a<<endl;
}
int main(){
    int arr[5]={1,4,7,8,9};
    int size=5;
    cout<<"case 1"<<endl;
    print(arr,size);
    cout<<endl;
    cout<<"case 2"<<endl;
    print(arr,size,2);
    cout<<"case 3"<<endl;
    print(arr,size,3,"Iconic");

}
/*output

case 1
4
7
8
9
string is arvind

case 2
7
8
9
string is arvind
case 3
8
9
string is Iconic
*/