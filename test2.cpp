
#include <bits/stdc++.h>

using namespace std;





    void revString(vector<char>& s, int index, int size){
       if(index == size){
           return;
       }

       revString(s, index+1, size);
       cout<<s[index];
    }

    void reverseString(vector<char>& s) {
        int index=0;
        int len = sizeof(s);
        revString(s, index, len);
    }


    int main(){

        vector<char> str= {'h','e', 'l','l','o'};

        reverseString(str);
        
    }
