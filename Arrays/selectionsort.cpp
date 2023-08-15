#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int i,j,min_ind;
    for(i=0;i<n;i++){
        min_ind=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
            if(min_ind!=i)
            swap(arr[min_ind],arr[i]);
        }
    }

  
}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
int arr[]={12,11,13,78,65,99};
int n=sizeof(arr)/sizeof(arr[0]);
selectionsort(arr,n);
printarray(arr,n);
return 0;
}