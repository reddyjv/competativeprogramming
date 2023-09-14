#include<iostream>
using namespace std;
int isprime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }

    }
    return 1;
}
int main(){
    int n;
    cout<<"enter number to be checked"<<endl;
    cin>>n;
    int a=isprime(n);
    if(a){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
}
/* output
enter number to be checked
9
9 is not a prime number


enter number to be checked
7
7 is a prime number
*/