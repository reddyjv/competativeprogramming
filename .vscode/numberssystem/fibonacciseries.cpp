#include<iostream>
using namespace std;
int main()
{
    int position,k=1;
    while(k==1){
    cout<<"enter position of fibonacci series"<<endl;
    cin>>position;
    int fib;
     int first=0;
        int second=1;
        if(position==1){
            cout<<"the fibonacci value of position "<<position<<" is 0";
        }
        else if(position==2)
        {
            cout<<"the fibonacci value of position "<<position<<" is 1"<<endl;
        }
        else{
    for(int i=3;i<=position;i++){
       
         fib=first+second;
        
        first=second;
        second=fib;

    }
    cout<<"the fibonacci value of position "<<position<<" is "<<fib<<endl;
        }
        cout<<"\npress 1 to continue or press 0 to end"<<endl;
        cin>>k;
    }
}