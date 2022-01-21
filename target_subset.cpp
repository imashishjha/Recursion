#include <bits/stdc++.h>
using namespace std;


void targetSubset(int arr[], int index, string subset, int sos, int target, int size){

    if(index == size){
        if(sos == target){
            cout<<subset+"."<<endl;
        }
        return;
    }

    targetSubset(arr,  index+1, subset + to_string(arr[index]) + ", ", sos+ arr[index], target, size);
    targetSubset(arr, index+1, subset , sos, target, size);

}

int main(){
    int n;
     cin>>n;
     int arr[n];
     for(int i =0; i<n; i++){
        cin>>arr[i];
     }

    int target;
    cin>>target;

    targetSubset(arr, 0, "", 0, target, n);
}

