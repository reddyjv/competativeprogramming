#include<iostream>
using namespace std;
bool palindrome(string str,int i,int j){
    //base case
    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else{
        return palindrome(str,i+1,j-1);
    }

}
int main(){
    string name="abbaabba";
    cout<<endl;
    bool ispalindrome=palindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"it is a palindrome"<<endl;

    }
    else{
        cout<<"it is not a palindrome"<<endl;
    }

    }
    /*output
    it is a palindrome
    */
   //do using alternate method 
