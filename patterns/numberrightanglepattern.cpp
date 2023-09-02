#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    while(1){
    cout<<"enter number of rows"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<' ';
             k++;
        }
         cout<<endl;
   
    }
   
    }

}