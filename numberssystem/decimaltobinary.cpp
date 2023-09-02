#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter decimal number"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"answer in binary is "<<ans<<endl;
}
/*
output
enter decimal number
18
answer in binary is10010
*/