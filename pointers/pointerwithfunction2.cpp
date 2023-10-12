//on sending address of array only some part of array can be sent(benefit of passing array address)
#include<iostream>
using namespace std;
int getsum(int arr[],int n){           //only pointer is passed
    cout<<endl<<"size :"<<sizeof(arr)<<endl; //gives size of pointer
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum is"<<getsum(arr,5)<<endl;
    cout<<"sum is"<<getsum(arr+2,3)<<endl; //sending part of array
    return 0;
}
/*output
sum is
size :8
15
sum is
size :8
12
*/