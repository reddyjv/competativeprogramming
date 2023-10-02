#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    //taking input -> row wise input
     cout<<"enter array row wise"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
   //taking input -> col wise input
        cout<<"enter array col wise"<<endl;
   for(int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
   }
   //printing
    for(int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cout<<arr[row][col]<<endl;
    }
    cout<<endl;
   }

}
/* output

2 3 4 5
6 7 8 9
1 2 3 4
4 5 6 
2 3 4
1 2 3
8 9 0
4
5
6

2
3
4

1
2
3

8
9
0
*/