#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout<<endl;
    cout<<"print first index element"<<d.at(1)<<endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    cout<<"emoty or not"<<d.empty()<<endl;
    cout<<"before erase and after erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }


}