
#include <iostream>
using namespace std;


double pow(double x, int n){
    if(n == 0){
        return 1;
    }
  return x * pow(x, n-1);
}                                                     

double pown(double x , int n){
   if(n<0){
       return 1/pow(x, -n);
   } else{
       return pow(x, n);
   }
}


int main(){

   double x;
   int n;
   cin>>x;
   cin>>n;

   cout<<pown(x, n);
   
}