#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int n,k=5,ans=0;
    cout<<"enter binary binary number"<<endl;
    cin>>n;
  int  i=0;
    while(n!=0){
      int  bit=n%10;
      if(bit==1){
        ans=ans+(pow(2,i));
      }
      n/=10;
      i++;
    }
    cout<<"the decimal number is"<<ans<<endl;

}
