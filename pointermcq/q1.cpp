#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<"  "<<second<<endl;
}
/*output
0  9
*/