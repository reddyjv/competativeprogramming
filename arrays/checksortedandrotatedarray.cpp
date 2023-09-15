#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& nums){
    int count=0;
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){   //to check where pivot broke
            count++;
        }
    }
    if(nums[n-1]>nums[0]){     //to check whether rotated
        count++;
    }
    return count<=1;

}
int main(){
    vector<int> v(300);
    v={3,4,5,1,2};
    bool f=check(v);
    if(f){
        cout<<"it is sorted and rotated"<<endl;
    }
    else{
 cout<<"it is not sorted and rotated"<<endl;
    }
}
/* output
it is sorted and rotated
*/