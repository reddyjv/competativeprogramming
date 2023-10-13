#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int k){
    //base case (element not found)
    if(s>e)
    return false;
    int mid=s+(e-s)/2;
    cout<<"value of mid is"<<mid<<endl; //debugging purpose
    //element found
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binarysearch(arr,mid+1,e,k);
    }
    else
    {
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){
        int arr[9]={1,4,7,6,9,44,77,90,99};
    int size=5;
    int key=1;
    bool ans=binarysearch(arr,0,8,key);
    if(ans)
    {
        cout<<"key is present"<<endl;
    }
    else
    {
        cout<<"key is not present"<<endl;
    }
}
/*output
value of mid is4
value of mid is1
value of mid is0
key is present
*/