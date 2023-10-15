#include<iostream>
using namespace std;
int main(){
   float f=12.5;
   float p=21.5;
   float *ptr=&f;

   (*ptr)++;
   *ptr=p;
   cout<<*ptr<<" "<<f<<" "<<p<<endl;

}
/*output
21.5 21.5 21.5
*/