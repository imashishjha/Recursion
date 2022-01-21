//Given an input string S and two characters c1 and c2, 
//you need to replace every occurrence of character c1 with character c2 in the given string.

// Sample Input :
// abacd
// a x

// Sample Output :
// xbxcd

#include <iostream>

using namespace std;

void ReplaceChar(char* s, char x, char y){

  if(s[0] == '\0'){
      return;                                                       
  }
  if(s[0] == x){
      s[0] = y;
  }
  return ReplaceChar(s+1, x, y);
}

int main(){
   char x,y;
   char str[100];
   cin>>str;
   cin>>x;
   cin>>y;
   ReplaceChar(str,x,y);
   cout<<str;
}