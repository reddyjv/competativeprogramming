#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){       //base condition
        return 0;   
    }
    if(n==1){       //base condition
        return 1;    
    }
    int ans;
    
     return fib(n-1)+fib(n-2); //recurrence relation

         
}
int main(){
    int num;
    cout<<"enter the endpoint of fibonacci number"<<endl;
    cin>>num;
    int ans=fib(num); 
    cout<<"the answer is at the current position is "<<ans<<endl;  //function call
}
/* output
enter the endpoint of fibonacci number
5
the answer is at the current position is 5
*/