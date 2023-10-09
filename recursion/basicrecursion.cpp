/* a recursion is funtion which callls itself until base condition fails
condition 1:it should have base case
condition 2:recurrence relation
condition 3:return statement

->each recursion call acquires a stack container.
->when recurrence relation is at end after proceeses it is called as  
tail recursion
->if recursion relation is before process then it is called as
head recursion
*/
#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int smallerproblem=power(n-1);
    int biggerproblem=2*smallerproblem;
    return biggerproblem;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}
/* output'

enter the number
6
64
*/