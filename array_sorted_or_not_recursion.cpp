// We have given an array we have to check whether this array is sorted or not using recursion

#include <iostream>

using namespace std;

bool ArrayCheck(int a[], int size){
    
    if(size == 0 || size == 1){
        return true;
    }

    if(a[0]>a[1]){
        return false;                                   //if this condition reach then our array not sorted
    }
   
   bool next_Check= ArrayCheck(a+1, size-1);           // if u reach there it means initial arrays element sorted lets check next  
   
   return next_Check;
}

int main(){
   int arr[]= {2, 4, 5, 3, 7, 8, 9};
   cout<<ArrayCheck(arr, 7);
}