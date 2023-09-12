//minimum distance between any two of them is as large as possible
#include<iostream>
using namespace std;
bool ispossible(int stall[],int k,int mid){
    int cowcount=1;
    int lastposition=stall[0];
    int length=sizeof(stall)/sizeof(stall[0])
    for(int i=0;i<length;i++){
        if(stall[i]-lastposition>=mid){
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;
}
int aggressivecows(int stall[],int k){
    int s=0;
    int maxi=-1;
      int length=sizeof(stall)/sizeof(stall[0]);
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
    int arr[]={4,2,1,3,6}
}
