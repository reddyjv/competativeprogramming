#include<iostream>
using namespace std;
int main(){
 int first=0;
 int *p=&first;
 cout<<(*p)++<<" ";//first execute then increment
 cout<<first<<endl;
}
/*output
0 1
*/