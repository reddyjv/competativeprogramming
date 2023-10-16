#include<iostream>
using namespace std;
int main(){
    int k=1;
while(k<5){
    int i=5; //only once memory is allocated(int =4bytes)
    k++;
}
int j=0;
while(j<5)
{
    int* p=new int;//(memory is allocated for every iteration 4+4+4+......)
j++;
}
//in static allocaation memory automatically released
//in dynamic allocation manually memory should be released ("delete keyword must be used")
int* arr=new int[50];
delete []arr;

}