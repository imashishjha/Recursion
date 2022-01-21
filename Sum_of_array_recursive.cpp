// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces

// Output Format :
// Sum

// Constraints :
// 1 <= N <= 10^3

#include <iostream>

using namespace std;

int ArraySum(int a[], int size){

    if(size == 0){
        return 0;
    }
  int sum= a[0] + ArraySum(a+1,size-1);
  return sum;
}

int main(){
  int arr[]={3,4,6,7,2,1};
  cout<<ArraySum(arr, 6);
}