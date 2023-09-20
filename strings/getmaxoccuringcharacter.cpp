#include<iostream>
#include<string.h>
using namespace std;
string removeoccurences(string s,string part){
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
char getmaxOccChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    string s,a,part;
    cout<<"enter the string "<<endl; //check for cin.getline(str,len);
    cin>>s;
    //cin.getline(a,10);
    char ans=getmaxOccChar(s);
    cout<<"the max occuring character is "<<ans<<endl;
    cout<<"enter part to remove"<<endl;
    cin>>part;
    string k=removeoccurences(s,part);
    cout<<"after removing"<<endl;
    cout<<k;

}
/*enter the string 
pppjjjjjkkkkllllllooooo
the max occuring character is l
enter part to remove
j
after removing
pppkkkkllllllooooo*/