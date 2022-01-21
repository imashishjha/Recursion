// Given an integer array (of length n), find and return all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. 
// But the order of elements should remain same as in the input array.

// Sample Input:
// 3
// 15 20 12

// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12

#include <bits/stdc++.h>

using namespace std;


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }

for(int i=0; i<pow(2,n);i++){
    for(int j=0; j<i; j++){
     if()
       cout<<arr[j];
       cout<<" ";
    }
    cout<<"\n";
}
  

  
}