#include <bits/stdc++.h>
using namespace std;


void targetSubset(int arr[], string subset, int index, int sos, int target){

    if(index == sizeof(arr)){
        if(sos == target){
            cout<<subset+"."<<endl;
        }
        return;
    }

    targetSubset(arr, subset + to_string(arr[index]) + ", ", index+1, sos+ arr[index], target);
    targetSubset(arr, subset, index+1, sos, target);

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

    targetSubset(arr, "", 0, 0, target);
}
