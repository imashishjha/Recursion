// You have given an array.. You have to find of given very first index using recusrion
// e.g   1 2 3 4 5 6 6 7,  6
// Output: 5

#include <iostream>
using namespace std;


int findindex(int a[], int ptr, int x){
  
   int size= sizeof(a);
                                             
   if(ptr == size){
       return -1;        
   }

   if(a[ptr] == x){
      return ptr;
   }
   return findindex(a, ptr+1, x);
}


int main(){
  int arr[]= {2,4,4,5,6,8};
  cout<<findindex(arr, 0 , 4);
}