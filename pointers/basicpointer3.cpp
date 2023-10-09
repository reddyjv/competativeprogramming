//int arr[100];  arr will  have address of first loction of array
//actual representation->  arr[i]=*(arr+i) correct one or               i[arr]=*(i+arr) gives error
//arr=arr+1 gives error because symbol table can't be changed
#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,4,5,6};
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<"value at fisrt block"<<arr[0]<<endl;
     cout<<"address of first memory block is "<<&arr[0]<<endl;
     cout<<"4th "<<*arr<<endl;
     cout<<"5th "<<*arr+1<<endl;
     cout<<"6th "<<*(arr+1)<<endl;    //shifting the array location by increasing 4 bytes of int
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr+2)<<endl;
    cout<<"the sizes of pointers"<<endl;
    int temp[10];
    cout<<"1st "<<sizeof(temp)<<endl;
    cout<<"2nd "<<sizeof(*temp)<<endl;   //doubt how?
    cout<<"3rd "<<sizeof(&temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
return 0;
}
/* output

address of first memory block is 0x7fffffffd0c0
value at fisrt block2
address of first memory block is 0x7fffffffd0c0
4th 2
5th 3
6th 3
7th 3
8th 4
9th 4
the sizes of pointers
1st 40
2nd 4
3rd 8
8
4
8
*/
