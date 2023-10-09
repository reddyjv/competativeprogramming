//distinct way to climb climb stairs
#include<iostream>
using namespace std;
int count(long long nstairs){
    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }
    int ans=count(nstairs-1)+count(nstairs-2);
    return ans;
}
int main(){
    int stair;
    cout<<"enter the number of stairs"<<endl;
    cin>>stair;
    int ans=count(stair);
    cout<<"the number of ways to reach is "<<ans<<endl;

}
/*output
enter the number of stairs
3
the number of ways to reach is 3
*/
