#include<iostream>
using namespace std;
int main(){
    int first=8;
    int second=11;
    int *third=&second;
    *third=*third+2;
    cout<<first<<"  "<<second<<endl;
    return 0;

}
/*output
8  13
*/