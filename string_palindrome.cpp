
// A string is said to be a palindrome if the string read from left to right is equal to the 
// string read from right to left. For example, ignoring the difference between uppercase and lowercase letters,
// the string "abcdcba" is a palindrome

//Solution 1: new String will take lot of space

#include <iostream>

using namespace std;


// bool checkPalindrome(string str){

//     int length = str.length();

//     if(length == 0 || length == 1){
//             return 1;
//     }

//     if(str.at(0) == str.at(length-1)){
//           return checkPalindrome(str.substr(1, length-2));
//     } else{
//         return false;
//     }
// };



// int main(){

//    string str ="abcdcba" ;
//    cout<<checkPalindrome(str);

// }

// Solution 2: More Optimised



bool checkPalindrome(string str, int start, int end){
    
    int length =  str.length();
    
    if(start == length/2+1){
            return true;
    }

    if(str.at(start) == str.at(end)){
        return checkPalindrome(str, start+1, end-1);
    } else {
        return false;
    }
}


int main(){
   string str = "abccba";
   int length = str.length();
   cout<<checkPalindrome(str, 0, length-1);
}