#include<iostream>
using namespace std;
int main()
{
    int a[100],n,key,flag=0;
 
    cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];         //enter in ascending order
    }
    while(1){
      cout<<"enter key to be searched"<<endl;
    cin>>key;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==key){
            flag=1;
            break;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    if(flag){
        cout<<"key is found"<<endl;
    }
    else{
         cout<<"key is not found"<<endl;
    }
    }
}