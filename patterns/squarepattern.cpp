#include<iostream>
using namespace std;
int main()
{
    int rows,k=1;
    while(k==1){
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<'\n';
    }
    cout<<"t\ To repeat again press 1\n To end press 0"<<endl;
    cin>>k;
    }
}
/*output
enter number of rows
6
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
tTo repeat again press 1
 To end press 0         */