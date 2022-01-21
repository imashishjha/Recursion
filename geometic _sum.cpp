
// S= 1+ 1/2+ 1/4+ 1/8 + 1/16 + ..... + 1/2^k  ,, take K from user and find S using Recursion

#include <iostream>
using namespace std;


double GeometricSum(int a, double r, int k, int c){

                                       
  if(c == k){
    return 0;
  }
    
   return a + GeometricSum(a*r, r, k, c+1);
} 

int main(){
   int k,r,a;
   cin>>k;
   cin>>r;
   cin>>a;

   cout<<GeometricSum(a, r, k, 0);

}