#include<iostream>
using namespace std;
int main(){
    int i,n,k;
    while(1){
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=k;j++){
            cout<<"*";

        }
        cout<<endl;
        k=k+2;
    }
    }
}