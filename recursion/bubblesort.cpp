#include<iostream>
using namespace std;
void sortedarray(int* arr,int n){
    //base case - already sorted
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    sortedarray(arr,n-1);
}
}
int main(){
    int arr[5]={4,2,1,3,5};
    sortedarray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
/*output
1
2
3
4
5*/