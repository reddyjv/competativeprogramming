#include<iostream>
using namespace std;
int main(){
    int i=5;
    int& j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    return 0;
}
/*output
5
6
7
*/
