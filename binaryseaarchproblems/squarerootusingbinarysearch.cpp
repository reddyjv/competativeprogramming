#include<iostream>
using namespace std;
long long int binarysquare(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"the square root is "<<binarysquare(n)<<endl;
}
/* output
enter number
36
the square root is 6
*/