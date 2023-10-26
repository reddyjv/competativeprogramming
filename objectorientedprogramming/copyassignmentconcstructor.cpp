#include<iostream>
using namespace std;
class aravi{
    public:
    char a;
    int b;
    aravi(char a,int b){
        this->a=a;
        this->b=b;
   }
   void print(){
    cout<<"character is "<<this->a<<endl;
     cout<<"number is "<<this->b<<endl;
     cout<<endl;
   }
};
int main(){
    cout<<"before assigning"<<endl;
    aravi a('a',10);
    aravi b('b',20);
    a.print();
    b.print();
    cout<<"after assigning"<<endl;
    a=b;
    b.print();

}
/*output

before assigning
character is a
number is 10

character is b
number is 20

after assigning
character is b
number is 20
*/