//int arr[100]          on printing arr contains address of first index
//char ch[100]          on printing ch it gives entire array contents as output
#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5};
    char ch[6]="abscf";
    cout<<arr<<endl;
    cout<<"ch->"<<ch<<endl;
    char *c=&ch[0];
    //prints entire string
    cout<<c<<endl;
    return 0;
}
/*output

0x7fffffffd0f0
ch->abscf
abscf
*/

/* important note:
char ch[6]="abcde"
char *c="abcde"   risky method
behind the scenes:
for char ch[6]="abcde"
temp memory<-abcde\0
then copy to ch<-temp memory value

for char *c="abcde"
temp memory <-abscde\0 then copy address of temp memory  to pointer that is risky
so avoid doing

*/