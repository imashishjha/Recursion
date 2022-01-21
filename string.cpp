
//instead of uding char[], we can use inbuilt datatype string
//

#include <iostream>

using namespace std;

int main(){
    string str = "Heltohgti";
    // cout<<str;
    //  //taking string iput
    //  cin>>str;
    //  cout<<str;
    //  //but this will only return string without space.. what for string with space

    //  getline(cin, str);
    //  cout<<str;

    char c = str.at(3);                  //if you want to find particular character from string ar given index
    cout<<c<<endl;

    int length = str.length();           //If you want to find length of a string
    cout<<length<<endl;

    string ss1 = str.substr(1,4);        // this will give substring from given index to given index like in this
    cout<<ss1<<endl;                           // case output will be "elto"

    string ss2 = str.substr(3);          //in this case it will take from 3rd index to last automatically
    cout<<ss2<<endl;                           // output will be "tohgti"
}

