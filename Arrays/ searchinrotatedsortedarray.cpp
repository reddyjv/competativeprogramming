#include<iostream>
using namespace std;
int peakindex(int array[],int m){
    int s=0;
    int e=m-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(array[mid]>=array[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}

int binarysearch(int arr[],int f,int k,int key){
    int s=f,e=k;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){

            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
          else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}
int findpivot(int arr[],int n,int k){
    int pivot=peakindex(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else
    {
          return binarysearch(arr,0,pivot-1,k);
    }
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
    cout<<"key  is in index  "<<findpivot(a,n,key)<<endl;
}
/* output

enter number of elements
8
enter number of elements
6 7 8 9 1 2 3 4
enter key to be searched
3
key  is in index  6
*/