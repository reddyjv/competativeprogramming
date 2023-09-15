//code pending
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums,int k){
 

    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
      temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
    int i=0;
    cout<<"rotated array is"<<endl;
  while(i<5){
        cout<<nums[i]<<" ";
        i++;
  }

}
int main(){
   int k;
    
    vector<int> nums(5);
    nums={1,2,3,4,5};
    cout<<"enter position to be rotated"<<endl;
    cin>>k;
    rotate(nums,k);
    }
/* output
enter position to be rotated
2
rotated array is
4 5 1 2 3
*/