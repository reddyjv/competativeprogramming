#include<iostream>
using namespace std;
int main()
{
    int rows,k=1;
    while(k==1){
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<'\n';
    }
    cout<<"t\To repeat again press 1\n To end press 0"<<endl;
    cin>>k;
    }
}