#include <bits/stdc++.h>

using namespace std;

vector<string> getMazePath(int tot_row, int tot_col, int curr_row, int curr_col)
{
  if (curr_row == tot_row and curr_col == tot_col)
  {
    vector<string> ans;
    ans.push_back("");
    return ans;
  }

  vector<string> horizontal_path;
  vector<string> vertical_path;
  vector<string> diagonal_path;
  vector<string> all_path;

  if (curr_col < tot_col)
  {
    for (int i = 1; i < tot_col - 1; i++)
    {
      horizontal_path = getMazePath(tot_row, tot_col, curr_row, curr_col + i);
      for (string ele : horizontal_path)
      {
        for (int j = i; j < tot_col; j++)
        {
          all_path.push_back("h" + to_string(j) + ele);
        }
      }
    }
  }
  //    if(curr_row < tot_row){
  //        for(int i=1; i< tot_col-1; i++){
  //        horizontal_path= getMazePath(tot_row, tot_col, curr_row, curr_col+i);
  //        }

  //       for(string ele: horizontal_path){
  //            for(int i=1; i< tot_col-1; i++){
  //             all_path.push_back("v"+i+ele);
  //         }
  //       }
  //    }
  return all_path;
}

int main()
{
  int total_row;
  int total_col;
  cin >> total_row;
  cin >> total_col;

  vector<string> ans = getMazePath(total_row - 1, total_col - 1, 0, 0);

  for (string ele : ans)
  {
    cout << ele << endl;
  }
}