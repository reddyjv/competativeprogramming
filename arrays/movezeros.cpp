 //code is pending
 #include<iostream>
 using namespace std;
 void movezeros(int arr[],int n){
    int nonzero=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            int temp=arr[j];
            arr[j]=arr[nonzero];
            arr[nonzero]=arr[j];
            nonzero++;
        }
    }
      cout<<"moved zeros  array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
 }
 int main(){
    int arr[]={2,0,4,5,0,8,0};
    int n=7;
    movezeros(arr,n);
 }