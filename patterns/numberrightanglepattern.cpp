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
    /*
    enter number of rows
5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/