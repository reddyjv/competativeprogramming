#include<iostream>
#include<string.h>
using namespace std;
bool ispal(int n){
    string s=to_string(n);
    int length;
    length=s.length();
       for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-i-1]){
            return false;
        }
       }
       return true;


 
}
int main(){
    int mul1,mul2,product,largest,high,low;
    largest=0;
    cout<<" enter the range"<<endl;
    cout<<"enter lowest range"<<endl;
    cin>>low;
     cout<<"enter highest range"<<endl;
    cin>>high;
    for(int i=high;i>=low;i--){
        for(int j=i;j>=low;j--){
            product=i*j;
            if(product<largest){
                break;
            }
            if(ispal(product) && product>largest){
                largest=product;
                mul1=i;
                mul2=j;
            }
        }

    }
    cout<<"the values are "<<"product\n"<<" "<<largest<<"\nmultipcand1\n"<<" "<<mul1<<"\nmultiplicand2\n"<<mul2;
}
/* output
 enter the range
enter lowest range
100
enter highest range
10000
the values are product
 99000099
multipcand1
 9999
multiplicand2
990
*/