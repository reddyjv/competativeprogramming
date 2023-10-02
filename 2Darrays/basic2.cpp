#include<iostream>
using namespace std;
int largestrowsum(int arr[][4],int row,int col){
    int maxi=-1;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];

        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return rowindex;
}
void search(int arr[][4],int target){
    int flag=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                flag=1;
            }
        }
    }
    if(flag){
        cout<<"key found"<<endl;
    }
    else
    {
        cout<<"key not found"<<endl;
    }
}
void printrowsum(int arr[][4],int row,int col){ //col size must be mentioned 
//sum of each row
  for(int row=0;row<3;row++){
    int sum=0;
        for(int col=0;col<4;col++){
           sum+=arr[row][col];
        }
        cout<<sum<<" ";
}
cout<<endl;
}
void printcolsum(int arr[][4],int row,int col){ //col size must be mentioned 
//sum of each row
  for(int col=0;col<4;col++){
    int sum=0;
        for(int row=0;row<3;row++){
           sum+=arr[row][col];
        }
        cout<<sum<<" ";
}
cout<<endl;
}
int main(){
    int arr[3][4];
    //initializing techniques given below
   // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4]={{1,11,2,3},{3,4,5,2},{4,3,2,8}};
    cout<<"enter array"<<endl;
        for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    cout<<"the sum of each column is"<<endl;
    printcolsum(arr,3,4);
    cout<<"the sum of each column is"<<endl;
    printrowsum(arr,3,4);
    int tar;
    cout<<"enter target to be searched"<<endl;
    cin>>tar;
    search(arr,tar);
    int large;
    large=largestrowsum(arr,3,4);
    cout<<"the largest sum is in row "<<large<<endl;
}
/* output

enter array
2 3 4 5
1 2 3 4
3 4 5 6
the sum of each column is
6 9 12 15 
the sum of each column is
14 10 18 
enter target to be searched
5
key found
the maximum sum is 12
the largest sum is in row 2
*/