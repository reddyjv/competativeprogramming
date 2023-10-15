#include<iostream>
using namespace std;
int& func(int a){
    int num=a;
    int& ans=num;
    return ans;   //local variables dies after the function
}
int* fun(int n){
    int *ptr=&n;
    return ptr;//local variables dies after the function

}
void update(int& n){//same memory but accessed by or pointed by different variables
    n++;

}
int update1(int n){
    n++;
}
int main()
{

    int n=5;
    update1(n);
    cout<<n<<endl;
    update(n);
    cout<<n<<endl;
    func(n);
    cout<<n<<endl;
    fun(n);
    cout<<n<<endl;

    }
    /*output

5
6
6
6
*/