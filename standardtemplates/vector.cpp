#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);  //size and initialization with 1
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
     }cout<<endl;
     cout<<"capacity->"<<v.capacity()<<endl;
     v.push_back(1);
     cout<<"capacity->"<<v.capacity()<<endl;
     v.push_back(2);
      cout<<"capacity->"<<v.capacity()<<endl;
         v.push_back(3);
      cout<<"capacity->"<<v.capacity()<<endl;
      cout<<"size->"<<v.size()<<endl;
      cout<<"element at index at 2"<<v.at(2)<<endl;
      cout<<"front"<<v.front()<<endl;
      cout<<"back"<<v.back()<<endl;
      cout<<"before pop"<<endl;
      for(int i:v){
        cout<<i<<" ";
      }cout<<endl;
      v.pop_back();
      v.pop_back();
         cout<<"after pop"<<endl;
      for(int i:v){
        cout<<i<<" ";
      }cout<<endl;





}