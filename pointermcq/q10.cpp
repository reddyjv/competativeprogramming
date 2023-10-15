#include<iostream>
using namespace std;
int main(){
    char arr[]="abcde";
    char *p=&arr[0];
    cout<<p<<endl;
     p++;
  cout<<p<<endl;
    return 0;
    
}
/*output
abcde
bcde
*/