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
int main(){
       int a[100],n,key;
      cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"the pivot is in index  "<<peakindex(a,n)<<endl;


}
/*output

enter number of elements
5
enter number of elements
8 10 17 1 3
the pivot is in index  3
*/