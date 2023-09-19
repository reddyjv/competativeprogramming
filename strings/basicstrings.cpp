#include<iostream>
using namespace std;
void reverse(char name[],int n){  //string is one dimesional character array
int s=0;
int e=n-1;
while(s<=e){
    swap(name[s++],name[e--]);
}
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    //name[2]='\0            space, enter ,tab, breaks the string input sequence or teminate
    cout<<"your name is "<<name<<endl;
    int len=getlength(name);
    cout<<"length : "<<len<<endl;
    reverse(name,len);
    cout<<"reversed naame is "<<name<<endl;

}