#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralorder(vector<vector<int>>& matrix){
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total=row*col;
    //index initialization
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    while(count<total){
        //print starting row
        for(int index=startingcol;index<=endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        //print ending column
        for(int index=startingrow;index<=endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        //printing ending row
        for(int index=endingcol;index>=startingcol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;
        //print starting column
        for(int index=endingrow;index>=startingrow;index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
        }
  return ans; 
}