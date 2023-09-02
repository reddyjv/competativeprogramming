#include<iostream>
using namespace std;
int main()
{
    int a[100],n;
    cout<<"enter the number of elemnts"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {   
            if(a[j]>a[j+1]){
          int  temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }

        }
    }
    cout<<"the sorted elements are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
/* output

enter the number of elemnts
7
enter the elements
3
2
8
7
6
4
7
the sorted elements are
2 3 4 6 7 7 8 */