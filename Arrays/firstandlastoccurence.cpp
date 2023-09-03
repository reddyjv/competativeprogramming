#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){

            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
          else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){

            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
          else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}
int main(){
   int a[100],n,key;
      cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter key to be searched"<<endl;
    cin>>key;
    cout<<"first occurence is in index  "<<firstocc(a,n,key)<<endl;
    cout<<"last occurence is in index  "<<lastocc(a,n,key)<<endl;
    return 0;
}