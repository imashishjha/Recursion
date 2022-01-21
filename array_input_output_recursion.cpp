#include <iostream>

using namespace std;


void arrrecursionIN(int ptr, int arr[]){

   int size= sizeof(arr);
   if(ptr == size){
       return;
   }
   cin>>arr[ptr];
   return arrrecursionIN(ptr+1, arr);                   
}

void arrrecursionOUT(int ptr, int arr[]){

   int size= sizeof(arr);
   if(ptr == size){
       return;
   }
   cout<<arr[ptr];
   return arrrecursionOUT(ptr+1, arr);
}

int main(){
    int s;
    cin>>s;

    int arr[s];

    arrrecursionIN(0, arr);
    
    arrrecursionOUT(0, arr);

}