#include<iostream>
using namespace std;
bool valid(char ch){   //sttring should contain only upper and lower case and numbers
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
char tolower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';  //converting upper case to lower case
        return temp;
    }
}
bool checkpalindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
bool ispalindrome(string s){
    string temp="";
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);   //removing the special characters 
        }
    }
    for(int j=0;j<temp.length();j++){
        temp[j]=tolower(temp[j]);
    }
    if(checkpalindrome(temp)){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    string s;
    cout<<"enter string "<<endl;
    cin>>s;
    if(ispalindrome(s)){
        cout<<"given string is palindrome"<<endl;
    }
    else
    {
       cout<<"given string is not  palindrome"<<endl; 
    }

}