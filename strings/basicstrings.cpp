#include<iostream>
using namespace std;
bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){            //alternate method (just reverse the string and compare with original string)
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
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
    cout<<"your name is "<<name<<endl; //string stores its data internally in the form of a null-terminated 
                                       //c-string,but in normal usage does not allow you to access the null terminator
    int len=getlength(name);
    cout<<"length : "<<len<<endl;
    reverse(name,len);
    cout<<"reversed naame is "<<name<<endl;
    cout<<"palindrome or Not"<<checkpalindrome(name,len)<<endl;
    return 0; 

}