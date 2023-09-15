#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> findarraysum(vector<int>&a,int n,vector<int>&b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;

    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
        while(j>=0){
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    return reverse(ans);

}
int main(){
    vector<int> a,b,c;
    int n,m;
    a={1,2,3};
    b={1,0};
    n=a.size();
    m=b.size();
    c=findarraysum(a,n,b,m);
    cout<<"the sum  of two arrays is"<<endl;
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

}
/* output

the sum  of two arrays is
1 3 3
*/