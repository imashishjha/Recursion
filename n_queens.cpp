#include <bits/stdc++.h>
using namespace std;



void nQueens(vector<vector<int>> arr, string asf, int cr, int n){

    if(cr == n){
        cout<<asf<<endl;
        return;
    }


  for(int cc=0; cc<n; cc++){
      arr[cr][cc] = 1;
      nQueens(arr, asf + to_string(cr)+ "-"+ to_string(cc)+ ", ", cr+1, n);
      arr[cr][cc]=0;

  }
   
}


int main(){

  int n;

  cin>>n;

  vector<vector<int>> chess(n, vector<int>(n));

//    for(int i =0;i < n; i++){
//        for(int j=0; j<n; j++){
//            cin>>chess[i][j];
//        }
//    }

nQueens(chess,"",0, n);

}