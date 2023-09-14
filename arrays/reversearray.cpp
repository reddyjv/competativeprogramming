 #include<iostream>
 using namespace std;
 void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"reversed array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
 }
 int main(){
    int arr[]={3,4,2,7,8,9};
    int n=6;
    reverse(arr,n);
 }
 /* output
 reversed array is
 9 8 7 2 4 3
 */