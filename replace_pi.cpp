#include <iostream>
using namespace std;



string replacePi(string str, int index){

  int length = str.length();

  if(index == length){
      return "";
  }
   
   if(index+1< length && str.at(index) == 'p' && str.at(index+1) == 'i' ){
       return "3.14"+replacePi(str, index+2);
   } else {
      return str.at(index)+replacePi(str, index+1);
   }
}


int main(){

  string str ="xpiyp";          //Expeccted Output  x3.14y3.14  xyzp
  
  cout<<replacePi(str, 0 );

}