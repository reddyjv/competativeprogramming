//minimum distance between any two of them is as large as possible
//code is pending to complete
#include<iostream>
using namespace std;
bool ispossible(int stall[],int k,int mid){
    int cowcount=1;
    int lastposition=stall[0];
    int length=sizeof(stall)/sizeof(stall[0]);
    cout<<"length "<<length<<endl;
    for(int i=0;i<length;i++){
        if(stall[i]-lastposition>=mid){
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastposition=stall[i];
        }
    }
    return false;
}
int aggressivecows(int stall[],int k){
    cout<<"size of stall is"<<sizeof(stall)<<endl;
    cout<<"array is"<<stall[0]<<endl;
    cout<<"array is"<<stall[1]<<endl;
    cout<<"array is"<<stall[2]<<endl;
    cout<<"array is"<<stall[3]<<endl;
    cout<<"array is"<<stall[4]<<endl;
    cout<<"array is"<<stall[5]<<endl;
    
    int s=0;
    int maxi=-1;
      int length=sizeof(stall)/sizeof(stall[0]);
      cout<<"length is"<<length<<endl;
    for(int i=0;i<length;i++){
       maxi=max(maxi,stall[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(stall,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int leength=sizeof(arr)/sizeof(arr[0]) ;
    cout<<"leength is"<<leength<<endl; 
     int length=sizeof(arr)/sizeof(int)  ;
     cout<<"length iss" <<length<<endl;
     cout<<"size of int is"<<sizeof(int)<<endl;
     cout<<"size of arr is"<<sizeof(arr)<<endl;
     cout<<"size of arr 0 is"<<sizeof(arr[0])<<endl;
                                               //enter in sorted order or sort after entering
    int k=2;                 //number of cows
    int ans=aggressivecows(arr,k);
    cout<<"the answer is "<<ans<<endl;

          
}
