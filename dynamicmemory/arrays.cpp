//int arr[n];   is abad practice
//int arr[100]; correct method (because at compile time it must be know how much space it should be taken
//otherwise it may give run time error or program crash)
//there will be 2 types of memory (stack and heap memory)
//at run time memory will be allocated at heap memory and its memory address will be stored in stack memory 
//new key word is used for heap memory
#include<iostream>
using namespace std;
int getsum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int* arr=new int[n];
// stack(8)      heap(4*n)bytes
//static          dynamic            total=8+(n*4)
cout<<"enter values"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=getsum(arr,n);
cout<<"answer is "<<ans<<endl;
return 0;
}
/*
enter n
3
enter values
1
2
3
answer is 6
*/