#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //place pivot at righ right position
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    //left and right part settlement
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;


}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,0,p-1); //left part
    quicksort(arr,p+1,e);//right part

}
int main()
{
    int arr[5]={2,4,1,5,6};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

}
/*output
1
2
4
5
6
*/
