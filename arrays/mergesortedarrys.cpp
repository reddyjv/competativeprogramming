 #include<iostream>
 using namespace std;
 void merge(int arr1[],int n,int arr2[],int m){
    int arr3[100];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
             }
            else{
            arr3[k]=arr2[j];
            k++;
            j++;

            }

    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
      cout<<"sorted array is"<<endl;
    for(int i=0;i<k;i++){
        cout<<" "<<arr3[i];
    }
 }
 int main(){
    int arr1[]={2,4,5,13,78};
    int arr2[]={1,3,12,14};
    merge(arr1,5,arr2,4); 
 }
 /* output
 sorted array is
 1 2 3 4 5 12 13 14 78
 */