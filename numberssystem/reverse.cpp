#include<iostream>
using namespace std;
int main(){
   int n,rev=0;
   cout<<"enter the number"<<endl;
   cin>>n;
   while(n>0)
   {
    int rem=n%10;
    n=n/10;
    rev=rev*10+rem;

   }
   cout<<"the reversed number is "<<rev<<endl;
}
