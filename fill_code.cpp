#include <bits/stdc++.h>
using namespace std;
//u, l, d, r

void FillCode(vector<vector<int>> &arr, int cc, int cr, int tot_row, int tot_col, string psf){
    if(cc<0 || cr< 0 || cc == tot_col+1 || cr == tot_row+1 || arr[cr][cc] == 1 || arr[cr][cc] == 2 ){
       return;
    }
    if(cc == tot_col and cr == tot_row){
        cout<<psf<<endl;
        return;
    }
    arr[cr][cc]= 2; 
    FillCode(arr, cc, cr-1, tot_row,tot_col, psf+ "u");
    FillCode(arr,cc-1, cr, tot_row, tot_col, psf+ "l");
    FillCode(arr,cc, cr+1, tot_row, tot_col, psf+ "d");
    FillCode(arr,cc+1, cr, tot_row, tot_col, psf+ "r");
    arr[cr][cc]= 0;
}

int main(){

   int row, col;
   cin>>row;
   cin>>col;
    
  vector<vector<int>> Maze(row , vector<int>(col));  //2D Array using Vector of Vector
    
    for(int i=0; i< row; i++){
        for(int j =0; j<col; j++){
            cin>>Maze[i][j];
        }
    }
  bool visitedGrid[row][col];
  FillCode(Maze, 0,0, row-1, col-1, "") ;


}