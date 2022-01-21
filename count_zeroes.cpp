
#include <iostream>
using namespace std;


int countZeroes(int n){

    if(n == 0){
        return 0;
    }

    int s= n % 10;

    if(s == 0){
        return 1 + countZeroes( n / 10);
    } else countZeroes(n / 10);

}

int main(){
   int n;
   cout<<"Enter Your No: ";
   cin>>n;
   cout<<"Total No of Zeroes: "<<countZeroes(n);
}