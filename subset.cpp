
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> answer;
vector<vector<int>> subsets(vector<int> nums, int index, vector<int> subsetSoFar){
   
   if(index == nums.size()){
       answer.push_back(subsetSoFar);
       return;
   }
      subsets(nums, index+1, subsetSoFar);
      subsetSoFar.push_back(nums[index]);
      subsets(nums, index+1, subsetSoFar);
}

int main(){

    vector<int> nums= {2,5,6};
    vector<int> inp;
    subsets(nums,0, inp);

}