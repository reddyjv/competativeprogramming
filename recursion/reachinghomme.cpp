#include<iostream>
using namespace std;
void reachhome(int src,int dest){
    if(src==dest){
        cout<<"reached home"<<endl;
        return;
    }
    src++;
     cout<<src<<endl;
    reachhome(src,dest);
   
}
int main(){
    int dest;
    int src;
    cout<<"enter source number "<<endl;
    cin>>src;
     cout<<"enter destination number "<<endl;
    cin>>dest;
    cout<<"path is"<<endl;
        reachhome(src,dest);
    return 0;

}
/*output
enter source number 
3
enter destination number 
9
path is
4
5
6
7
8
9
reached home
*/