#include<iostream>
using namespace std;
int main()
{
    int a[100],n,key,flag=0;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter key to be searched"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"key "<<key<<" is found"<<endl;
    }
    else{
         cout<<"key "<<key<<" is not found"<<endl;
    }
}
/* output
enter number of elements
5
enter number of elements
3 2 4 5 1
enter key to be searched
5
key 5 is found
*/