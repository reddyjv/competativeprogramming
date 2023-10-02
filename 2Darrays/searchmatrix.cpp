#include<iostream>
#include<vector>
using namespace std;
bool serachmatrix(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row && colindex>=0){
        int element=matrix[rowindex][colindex];
        if(element == target){
            return 1;
        }
        if(element<target){
            rowindex++;

        }
        else{
            colindex--;
        }
    }
    return 0;
}
//time complexity is o(logmn)
/* output
input:
1 3 5 7               column wise sorted and row wise sorted
10 11 16 20
23 30 34 60
*/
