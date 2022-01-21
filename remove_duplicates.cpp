
//Given a string S, remove consecutive duplicates from it recursively
// Sample Input 1 :
// aabccba

// Sample Output 1 :
// abc

#include <iostream>
using namespace std;

void RemoveDup(char* s){                           
   if(s[0] == '\0'){
       return;
   }
   int i=1;
   for(;s[i] != '\0';i++){
      if(s[i] == s[0]){
          int j=i+1;
          for(;s[j] != '\0';j++){
            s[j-1] =s[j];
          }
          s[j-1] =s[j];
          i--;
      }
   }
   RemoveDup(s+1);
}

int main(){
   
   char str[50];

   cin>>str;

   RemoveDup(str);
   cout<<str;
}