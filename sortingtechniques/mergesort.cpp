#include<iostream>'
using namespace std;
void merge(int array[],int const left,int const mid,int const right){
    int const subarray1=mid-left+1;
    int const subarraytwo=right-mid;
    auto *leftarray=new int[subarray1],*rightarray=new int[subarraytwo];
    for(auto i=0;i<subarray1;i++){
        leftarray[i]=array[left+i];
    }
    for(auto j=0;j<subarraytwo;j++){
        rightarray[j]=array[mid+1+j];
    }
    auto indexofsubarray1=0,indexofsubarraytwo=0;
    int indexofmergedarray=left;
    while(indexofsubarray1<subarray1 && indexofsubarraytwo<subarraytwo){
        if(leftarray[indexofsubarray1]<=rightarray[indexofsubarraytwo]){
            array[indexofmergedarray]=leftarray[indexofsubarray1];
            indexofsubarray1++;

        }
        else{
            array[indexofmergedarray]=rightarray[indexofsubarraytwo];
            indexofsubarraytwo++;
        }
        indexofmergedarray++;
    }


while(indexofsubarray1<subarray1){
    array[indexofmergedarray]=leftarray[indexofsubarray1];
    indexofsubarray1++;
    indexofmergedarray++;

}
while(indexofsubarraytwo<subarraytwo){
    array[indexofmergedarray]=rightarray[indexofsubarraytwo];
    indexofsubarraytwo++;
    indexofmergedarray++;

}
delete[] leftarray;
delete[] rightarray;
    }

void mergesort(int array[],int const begin,int const end){
    if(begin>=end)
    return;
    int mid=begin+(end-begin)/2;
    mergesort(array,begin,mid);
    mergesort(array,mid+1,end);
    merge(array,begin,mid,end);
}
void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
      
    }
      cout<<endl;
}
int main(){
    int arr[]={12,11,6,3,99,76,51};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    cout<<"given array is\n";
    printarray(arr,arr_size);
    mergesort(arr,0,arr_size-1);
    cout<<"\n sorted array is\n"<<endl;
    printarray(arr,arr_size);
    return 0;


}
/* output

given array is
12 11 6 3 99 76 51 

 sorted array is

3 6 11 12 51 76 99
*/