/*symbol table: is an important data structure created and maintained by compiler in
order to keep track of of semantics of variables i.e. it stores information about the scope
and binding information about names ,information about instances of various entities such
aas variable and function names ,classes ,objects.etc

-> &(address of)
*/
#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;
    cout<<"address of num is"<<&num<<endl;
    int *ptr=&num;
    cout<<"addres is:"<<ptr<<endl;
    cout<<"value is:"<<*ptr<<endl;
    double d=4.3;
    double *p2=&d;
    cout<<"address is:"<<p2<<endl;
    cout<<" value is :"<<*p2<<endl;
    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
    cout<<"size of pointer is:"<<sizeof(p2)<<endl;
    return 0;

}
/* pointer of each datatype will have same datatype
decalring pointer is bad praactice but initializing will make it better
*/
/*output
address of num is0x7fffffffd0fc
addres is:0x7fffffffd0fc
value is:5
address is:0x7fffffffd100
 value is :4.3
size of integer is:4
size of pointer is:8
size of pointer is:8
*/