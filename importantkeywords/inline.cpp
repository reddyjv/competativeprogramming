//inline (if body of code is single line then use inline)(memory can be saved)(no function call overidden)
//if body of code is 2 or 3 lines (may or may not accepted)
//more 3 lines of body then can't be done as inline
#include<iostream>
using namespace std;
inline int getmax(int& a,int& b){//reference variables are used to save memory
    return (a>b)?a:b;            
}
int main(){
    int a=1,b=2;
    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+3;
    ans=getmax(a,b);
    cout<<ans<<endl;
}
/*output

2
5
*/