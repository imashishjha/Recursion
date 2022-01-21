#include <bits/stdc++.h>
using namespace std;

//abc    a ab ac abc b bc c 

vector<string> printSubs(string str, int index, int size){
   
     if(size == 1){
         vector<string> endsub;
         endsub.push_back(str);
         endsub.push_back("");
         return endsub;
     }

      vector<string> finalSubs;
      vector<string> minSubs;
      string str2 = str;
      minSubs = printSubs(str2.substr(1), index+1, size-1);
      for(string ele: minSubs){
          finalSubs.push_back(str2[0]+ele);
          finalSubs.push_back(ele);
      }
      return finalSubs;
}


int main(){

    string str;
    cin>>str;
    int length = str.size();
    vector<string> finalSubsquences = printSubs(str, 0, length);

    for(string ele: finalSubsquences){
        cout<<ele<<endl;
    }
}

