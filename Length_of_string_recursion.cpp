
//Taking string from the user find the length of string

// #include <iostream>

// using namespace std;

// int StringLength(char s[]){
//     if(s[0]=='\0'){
//         return 0;
//     }

//     return 1+ StringLength(s+1);
// }

// int main(){
//   char str[100];
//   cin>>str;
  
//   int l= StringLength(str);
//   cout<<l;

// }

//Problem 2: Remove particular character from the string using recursion and return new string

#include <iostream>

using namespace std;

void ModifyString(char s[], char y){

   if(s[0] == '\0'){
       return;
   }

     if(s[0] != y){
         return ModifyString(s+1,y);
     } else{
         int i = 1;                          
         for (; s[i]!= '\0'; i++)
         {
              s[i-1] = s[i];
         }      
         s[i-1] = s[i];               
         ModifyString(s,y);
     }
}

int main(){
  char str[100];
  char x;
  cin>>str;
  cin>>x;
  ModifyString(str, x);
  cout<<str;
}