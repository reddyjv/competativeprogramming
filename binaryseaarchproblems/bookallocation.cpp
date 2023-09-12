#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
        
    }
    return true;
}
int allocateBooks(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i] ;      //for setting range
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
 
    int n=4;
    int arr []={12,34,67,90};
    int m=2;
   int ans=allocateBooks(arr,4,2);   
   cout<<"the answer is "<<ans<<endl;                                   //m is number of students



}
/* output
the answer is 113       // (maximum) minimum pages for each student(allocation will be 
done in continuous manner)

*/
/*
why binarysearch & how do we know about it?
      basically,when we can neglect the left or right part by finding a possible/not possible
      solution on a sorted order answer searchspace.We can use binary search

*/