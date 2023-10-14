#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;

    }
    int ans=power(a,b/2);
    //if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cout<<"enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<"answer is"<<ans<<endl;
}
/*output
enter value of and b
2 3

answer is8
*/