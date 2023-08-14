#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="aravi";
    m[13]="sharvanand";
    m[2]="kabhi kushi kabhi gam";
    m.insert({5,"doraemon"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }
    cout<<"finding -13->"<<m.count(13)<<endl;
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).second<<endl;
    }
}
