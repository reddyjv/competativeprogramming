#include<iostream>
using namespace std;
void update(int* p){
    *p=*p+1;

}
int main(){
    int i=10;
    update(&i);
    cout<<i<<endl;
    return 0;
}
/*output
11
*/