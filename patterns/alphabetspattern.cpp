#include<iostream>
using namespace std;
int main()
{
    int rows,k=1;
    while(k==1){
    cout<<"enter number of rows"<<endl;
    cin>>rows;
    char ch=65;
    for(int i=1;i<=rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<ch<<" ";
             ch++;
        }
       
        cout<<'\n';
    }
    cout<<"t\To repeat again press 1\n To end press 0"<<endl;
    cin>>k;
    }
}
/* output
enter number of rows
5
A 
B C 
D E F 
G H I J 
K L M N O 
tTo repeat again press 1
 To end press 0
 */